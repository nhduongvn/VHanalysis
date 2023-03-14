#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.05220766,7.029799,0.3828562);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLogy();
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(-2.355562e+09);
   st_stack_110->SetMaximum(-0.354898);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Event/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.03175071);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1575776);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.2363664);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.2246069);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.1575776);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.08231667);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.04939);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.024695);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.02822286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.01646333);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.01881524);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.01646333);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.01528738);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.01175952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.003527857);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.003527857);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.001175952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,0.001175952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.006110428);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01361263);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.016672);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.01625199);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01361263);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.009838724);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.007621043);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.005388891);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.005760967);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.004400011);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.00470381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.004400011);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.004239957);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.003718688);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.002036809);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.002036809);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.001175952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,0.001175952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.007261071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.04990055);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.08682387);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.08388854);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.05144546);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.03136165);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.01483112);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.01081436);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.006488616);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.006643107);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.006334126);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.003244308);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.00355329);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.00355329);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.002162872);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.001390418);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.0006179635);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.0007724543);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001059136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.002776541);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.003662444);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.003600002);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.002819194);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.002201156);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.001513695);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001292563);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001001215);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001013064);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.0009892242);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.0007079661);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.0007409122);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.0007409122);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.0005780519);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.0004634726);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0003089817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0003454521);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,0.0001544909);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
