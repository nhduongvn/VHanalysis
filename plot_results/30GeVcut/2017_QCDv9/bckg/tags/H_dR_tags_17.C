#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Tue Feb 14 16:10:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-1072623,7.264125,7865902);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6972049);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(6972049);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,21590.72);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,2017412);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,2434966);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1934223);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,2109395);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1980626);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1965074);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,2366529);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,2283905);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,2511883);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,2797954);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,3270550);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,3689660);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,3868196);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,4386999);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,2916534);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,2079745);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,1749544);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,1399446);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,966854.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,756477.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,540022.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,327018.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,247302);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,86366.12);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,40965.81);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,33217.85);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,2646.447);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,19634.18);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,91685.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,100915.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,89724.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,110130.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,99730.01);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,101537.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,125703.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,103463);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,110270.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,117622);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,136421.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,140282.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,130243.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,157678);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,121481.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,101670.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,102545.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,92643.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,65737.89);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,62141.11);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,55574.12);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,39121.39);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,39850.13);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,8186.497);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,5651.377);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,18465.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1921.68);
   VbbHcc_tags_H_dR_stack_1->SetEntries(517600);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,43.36439);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,61970.48);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,112046.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,135885.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,163256);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,178148.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,183197);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,185427.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,189252.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,197833);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,210800.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,227578);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,246044.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,264378);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,261033.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,149324);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,95274.23);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,64297.27);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,43665.33);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,29233);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,19120.98);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,12136.43);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,7211.842);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,3884.24);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,1858.575);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,752.0573);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,194.7126);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,11.52125);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.767997);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,67.379);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,90.74979);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,99.95262);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,109.5191);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,114.4197);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,116.1013);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,116.9064);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,118.2312);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,121.025);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,125.057);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,130.0784);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,135.4252);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,140.4824);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,139.6464);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,105.3302);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,83.81117);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,68.56896);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,56.24053);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,45.79446);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,36.84965);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,29.20047);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,22.37657);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,16.30078);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,11.21639);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.062211);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,3.550568);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8270611);
   VbbHcc_tags_H_dR_stack_2->SetEntries(4.530053e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
