#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.310117,-0.135218,7.029799,0.9915989);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLogy();
   Z_dR_Bj0_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_16->SetBottomMargin(0.12);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_177 = new TH1F("st_stack_177","",30,0,6);
   st_stack_177->SetMinimum(-2.476093e+09);
   st_stack_177->SetMaximum(-0.8499952);
   st_stack_177->SetDirectory(0);
   st_stack_177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_177->SetLineColor(ci);
   st_stack_177->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_177->GetXaxis()->SetRange(1,30);
   st_stack_177->GetXaxis()->SetLabelFont(42);
   st_stack_177->GetXaxis()->SetTitleOffset(1);
   st_stack_177->GetXaxis()->SetTitleFont(42);
   st_stack_177->GetYaxis()->SetTitle("Event/0.2");
   st_stack_177->GetYaxis()->SetLabelFont(42);
   st_stack_177->GetYaxis()->SetTitleSize(0.037);
   st_stack_177->GetYaxis()->SetTitleFont(42);
   st_stack_177->GetZaxis()->SetLabelFont(42);
   st_stack_177->GetZaxis()->SetTitleOffset(1);
   st_stack_177->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_177);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.1581104);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,0.5437456);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,0.5630274);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,0.3914197);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.2313811);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.1600386);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.1041215);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.08098339);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.07327069);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.05206075);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.03663535);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.05013258);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.03470717);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.0404917);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.05013258);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.03470717);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.02120994);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.007712704);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.00964088);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.005784528);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.01746038);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.03237958);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.03294869);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.02747228);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.02112211);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.01756652);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.01416914);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.01249601);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.01188608);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.0100191);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.008404725);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.009831807);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.008180558);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.008836013);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.009831807);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.008180558);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.006395037);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.003856352);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.004311533);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.003339699);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,0.001928176);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.05440432);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.253635);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.2740366);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.1657317);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.08891077);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.04861127);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.03929201);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.02972088);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.02317221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.02342408);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.02140911);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.01586793);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.01637167);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.01183798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.01511231);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.01108236);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.006800541);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.003778078);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.002266847);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.002266847);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.001259359);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.0005037437);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001259359);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002518719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.003701745);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.007992716);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.008307955);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.006460894);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.004732243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.003499116);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.003145879);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.002736029);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.00241587);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.002428964);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.002322144);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.001999171);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.002030656);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.001726747);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.001950991);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.001670729);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.001308765);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.0009754956);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.0007556156);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0007556156);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0005632026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0003562006);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0005632026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0002518719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
