#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.8317269,7.029799,9.097694);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.423327e+07);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(2.289832);
   st_stack_145->SetMaximum(1.272775e+08);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,195.7503);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,499819);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,522693.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,418602.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,328301.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,298248.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,232466.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,288290.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,252746.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,254742.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,255355.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,284243.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,328110.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,409268.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,425324.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,218003.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,142287.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,82878.95);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,88231.87);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,42241.75);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,22429.85);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,19685.08);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,9023.449);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,5523.209);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,3357.582);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,553.8234);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,44.27204);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,60.59505);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,13396.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,16446.56);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,27750.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,13181.46);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,13424.88);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,8943.888);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,26053.14);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,11612.09);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,12382.09);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,11507.78);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,12274.05);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,14208.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,35217.84);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,32967.35);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,11427.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,9725.815);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,5876.066);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,21510.09);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,4715.569);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,3218.633);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,3246.492);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,1978.641);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,2060.457);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,1954.578);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,311.8217);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,30.15627);
   VbbHcc_both_Z_dR_stack_1->SetEntries(246965);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,10.53718);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,10369.67);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,19639.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,23968.56);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,28718.06);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,32952.01);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,36867.51);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,41320.71);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,46709.86);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,53402.93);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,61473.59);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,70514.96);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,79907.43);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,88373.07);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,88188.32);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,44952.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,24796.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,14098.72);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,8013.745);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,4427.082);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,2400.913);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,1235.967);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,610.1963);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,269.9728);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,106.8433);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,37.70402);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,7.876296);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.3812222);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.8647063);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,27.17969);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,37.44854);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,41.4018);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,45.32804);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,48.53868);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,51.34046);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,54.35638);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,57.81069);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,61.85896);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,66.44824);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,71.24179);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,75.94563);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,79.978);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,79.99236);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,57.16567);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,42.49747);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,32.0493);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,24.15159);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,17.94593);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,13.16744);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,9.428089);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,6.594268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,4.384046);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,2.739539);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.587028);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.7358794);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.1582364);
   VbbHcc_both_Z_dR_stack_2->SetEntries(1.151209e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
