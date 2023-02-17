#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Feb 16 10:37:19 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,0.58965,7.029799,2.393798);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLogy();
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(133.4231);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(6.399527);
   st_stack_112->SetMaximum(163.4495);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.1555773);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.6589261);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,0.9906854);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,0.8915164);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,0.6525581);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,0.326458);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,0.2002427);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.1269917);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.08300249);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.08678381);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.06307395);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.05809693);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.04421937);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.0349271);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.03388688);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.01430305);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.009562293);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,0.006131775);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.005010769);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.01828743);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.03765098);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.04623743);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.04359584);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.03747479);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.02638466);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.02066707);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.01672539);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.01294373);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.01381682);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.01138965);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.01103865);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.009426388);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.008426566);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.008879492);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.005523506);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.00479766);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,0.00358544);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.003557999);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.03213928);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.1767524);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.3435458);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.3540304);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.214752);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.1176217);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.06148955);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.03731748);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.03223066);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.02297608);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.02029044);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.01548141);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.01673798);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.01386824);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.01612576);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.007008614);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.003700161);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.002236655);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.002420421);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.0008069192);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.00300345);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.006980481);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.009807044);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.01001706);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.0077953);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.005722388);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.004173061);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.003205765);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.003037429);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.002524266);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.002354491);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.002112863);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.002186762);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.001964751);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.002188847);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.001432367);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.001045984);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.0007580747);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.0008644934);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.0004718988);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
