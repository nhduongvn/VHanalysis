#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-0.4570595,7.029799,7.120672);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLogy();
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1146307);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(2.833142);
   st_stack_19->SetMaximum(2306209);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Event/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,699.4992);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,932009.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,907420.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,644570.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,634069);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,516672.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,455153.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,428597.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,602151.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,508250.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,497080.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,595549.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,629020.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,684998.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,709656.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,388512.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,317568.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,207877.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,150362.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,95607.26);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,61435.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,29484.95);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,24137.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,11049.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,6278.649);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2155.361);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,40.69897);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1438.909);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,375.9224);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,40264.64);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,23409.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,19802.95);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,37108.34);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,18178.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,17567.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,17008.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,59465.69);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,43916.89);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,36980.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,49345.53);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,48916.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,42193);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,37503.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,16396.21);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,42598.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,29789.77);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,32455.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,9188.452);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,7668.801);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,3330.506);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,5181.454);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,3109.739);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,2914.476);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,807.1068);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,19.39065);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1438.364);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(261557);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,14.78298);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,19425.21);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,37344.63);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,45630.19);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,55005.34);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,63435.76);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,71354.53);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,80665.78);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,91073.85);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,104434.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,119747.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,137267.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,155148.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,171736.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,171475.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,87999.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,48478.23);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,27939.23);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,15932.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,8930.203);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,4825.15);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,2506.227);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,1260.111);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,577.9311);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,233.3275);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,78.66959);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,21.80258);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.6364349);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.050772);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,40.55326);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,56.1343);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,62.12565);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,69.05174);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,73.36667);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,77.83486);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,82.81077);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,87.39343);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,94.26555);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,100.6535);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,108.0946);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,115.3252);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,121.3491);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,121.2474);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,87.59731);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,64.84624);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,49.37744);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,37.03155);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,28.45139);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,20.21839);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,14.469);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,10.03237);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,6.911671);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,5.412313);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,2.611994);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,2.467035);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2195372);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(2.230134e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
