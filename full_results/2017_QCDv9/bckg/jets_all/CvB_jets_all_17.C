void CvB_jets_all_17()
{
//=========Macro generated from canvas: CvB_jets_all_17/CvB_jets_all_17
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *CvB_jets_all_17 = new TCanvas("CvB_jets_all_17", "CvB_jets_all_17",0,0,600,600);
   CvB_jets_all_17->SetHighLightColor(2);
   CvB_jets_all_17->Range(-0.2183529,-2.944012e+11,1.171633,2.158942e+12);
   CvB_jets_all_17->SetFillColor(0);
   CvB_jets_all_17->SetFillStyle(4000);
   CvB_jets_all_17->SetBorderMode(0);
   CvB_jets_all_17->SetBorderSize(2);
   CvB_jets_all_17->SetLeftMargin(0.15709);
   CvB_jets_all_17->SetRightMargin(0.1234783);
   CvB_jets_all_17->SetBottomMargin(0.12);
   CvB_jets_all_17->SetFrameFillStyle(1000);
   CvB_jets_all_17->SetFrameBorderMode(0);
   CvB_jets_all_17->SetFrameFillStyle(1000);
   CvB_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.822484e+12);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",20,0,1);
   st_stack_58->SetMinimum(0);
   st_stack_58->SetMaximum(1.913608e+12);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_58->GetXaxis()->SetRange(1,20);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetLabelSize(0.035);
   st_stack_58->GetXaxis()->SetTitleSize(0.035);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.05");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetLabelSize(0.035);
   st_stack_58->GetYaxis()->SetTitleSize(0.037);
   st_stack_58->GetYaxis()->SetTitleOffset(0);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetLabelSize(0.035);
   st_stack_58->GetZaxis()->SetTitleSize(0.035);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,3.737906e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.171804e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.128054e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.388467e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.935517e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,2.878228e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,4.263935e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,6.223131e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,9.693663e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.751899e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,3.571113e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.153936e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.214955e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,7.653615e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,6.420409e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,6.824708e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,8.113407e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,8.286813e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,3.699413e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,2.120717e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.370039e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.34232e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.32138e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.469855e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.7394e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,2.125463e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.590467e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,3.13177e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.910468e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,5.259801e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,7.515178e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.352798e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.387755e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.100417e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.005769e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.034501e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.125082e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.124903e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.443229e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.699802e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.890565e+09);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,2.832653e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,4917907);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,3436192);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,3248443);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,3304298);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,3347809);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,3650070);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,4314030);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,5641023);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,7703928);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.233783e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,3.176843e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,3.435704e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,2.479438e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,2.326455e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.505857e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.946292e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,3.147056e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,2.343748e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,3331609);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1364.732);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,568.6321);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,474.9799);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,460.6268);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,463.9106);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,467.3482);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,488.187);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,528.6778);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,601.6614);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,706.7045);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,896.5086);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1438.289);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1497.06);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1273.282);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1238.012);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1297.261);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1411.38);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1475.868);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1289.692);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,487.0821);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(5.230086e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   CvB_jets_all_17->Modified();
   CvB_jets_all_17->cd();
   CvB_jets_all_17->SetSelected(CvB_jets_all_17);
}
