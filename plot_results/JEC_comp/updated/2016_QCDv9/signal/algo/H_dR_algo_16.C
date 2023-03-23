#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.01502365,7.264125,0.1101734);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.09765374);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(0.09765374);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Event/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.008468439);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.01857966);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.06272986);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.04508161);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.06186756);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.04887933);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.03043918);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.008460614);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.01918271);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.006164198);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.01680011);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.006004008);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.01010499);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.008535811);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.002757038);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.005783016);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.002757874);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.004892251);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.007421475);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01350253);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01167169);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01353759);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01205593);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.009638664);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.00489119);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.007258435);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.00436213);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.006938787);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.004258571);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.005261854);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.004953784);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.002757038);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.0040896);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.002757874);
   VbbHcc_algo_H_dR_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.002699678);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.003617677);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.01489392);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.01342422);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.01918504);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.01536084);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.007832);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.006798828);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.004665611);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.003295298);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.004977459);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.004536303);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.005201112);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.001937209);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.002863282);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001509034);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001087685);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0003229572);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001022481);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.001147575);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002419954);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.002278455);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.002695171);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.002419767);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.001694122);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001615308);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001349745);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001104293);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001355669);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001273649);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001404093);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.0008755402);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001015788);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0007619519);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0006304129);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003229572);
   VbbHcc_algo_H_dR_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
