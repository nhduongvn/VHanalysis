#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Feb 16 10:35:32 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-217838.9,7.029799,1597485);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
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
   st->SetMaximum(1415953);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(1415953);
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
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,727.2237);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,924518.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,897536.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,641988.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,629845.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,515413.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,454213);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,433172.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,583896.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,511384.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,497845.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,576688.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,618115.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,695654.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,714221.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,392171.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,318176.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,210401);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,149016.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,93927.34);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,64797.14);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,29515.23);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,24499.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,8802.453);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,6882.62);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,1921.533);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,41.17258);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1621.663);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,401.9163);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,41269.38);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,24235.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,20523.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,38041.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,19080.56);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,18503.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,18235.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,55327.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,44979.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,37857.56);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,50215.55);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,49917.98);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,43631.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,38791.38);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,17713.18);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,43538.45);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,30495.31);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,33122.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,9640.178);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,8508.425);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,3529.894);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,5666.679);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,1973.984);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,3277.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,777.5087);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,19.50415);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1621.663);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(256755);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,14.96503);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,19450.29);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,37359.68);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,45641.42);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,55050.61);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,63392.82);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,71346.84);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,80658.14);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,91054.43);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,104391.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,119736.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,137303.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,155186.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,171733.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,171430.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,88014.22);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,48458.85);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,27935.66);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,15922.33);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,8925.277);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,4836.22);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,2500.808);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,1260.016);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,581.7674);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,232.2954);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,79.11857);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,21.25397);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.6451988);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.096786);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,42.2999);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,58.428);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,64.62216);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,71.85559);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,76.12297);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,81.0118);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,86.00287);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,90.7615);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,97.71845);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,104.6897);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,112.4659);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,120.006);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,126.127);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,125.9422);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,90.72326);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,67.35894);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,51.55078);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,38.52186);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,29.43825);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,21.00494);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,15.0699);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,10.46703);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,7.231634);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,5.640269);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,2.729888);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,2.835672);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2317621);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(2.03525e+07);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
