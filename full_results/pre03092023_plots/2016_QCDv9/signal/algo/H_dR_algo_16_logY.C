#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.310117,-0.02586878,7.029799,0.1897044);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(-2.27389e+09);
   st_stack_85->SetMaximum(-0.1856183);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Event/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.01775285);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.03452254);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1119978);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.1194688);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.08858977);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.1013298);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.09747169);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.04113835);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.0208274);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.01800826);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.0177829);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.01256091);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.01054912);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.009380293);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.006752902);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.002396092);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.006283841);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.009595758);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01559532);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.0160536);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01430505);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01494482);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01454481);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.00951979);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.006607238);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.006375303);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.006312486);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.0052664);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.004434089);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.004697062);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.003902172);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.002396092);
   VbbHcc_algo_H_dR_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.003034123);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.00939075);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.02800982);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.04067128);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.0492433);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.04131531);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.02054849);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.01465563);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.009411328);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.006549805);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.005264319);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.004574204);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.005335005);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.005415029);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.00206752);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.0008399621);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.0006372641);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0003077437);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.0009163042);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.001616507);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002830791);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.003396873);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.003741352);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.003430306);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.002419568);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.002056981);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.0016458);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001372101);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.00123326);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001145756);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001232192);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.00123225);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.0007832039);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0004850918);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0004128421);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003077437);
   VbbHcc_algo_H_dR_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
