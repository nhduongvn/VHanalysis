#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.310117,0.4989245,7.029799,2.742903);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLogy();
   Z_dR_Bj1_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_17->SetBottomMargin(0.12);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(257.382);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",30,0,6);
   st_stack_182->SetMinimum(5.864108);
   st_stack_182->SetMaximum(329.9935);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_182->GetXaxis()->SetRange(1,30);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Events/0.2");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.3888342);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.364888);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.918778);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,1.682303);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,1.409326);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,1.047472);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.8332162);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.606264);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.5158005);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.363441);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.2951966);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.2475843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.2301264);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.2094944);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.1396629);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.1428371);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.1047472);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.06030898);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.04126404);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.03015449);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.01269663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.01269663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.02484171);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.04654228);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.0551838);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.05167153);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.04729388);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.04077279);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.03636454);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.03101917);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.02861147);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.02401686);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.02164487);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.0198226);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01911096);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01823414);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01488812);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01505635);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.01289349);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.009783409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.008092545);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.006917915);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.004488936);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.004488936);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.002244468);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1503483);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.5148492);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.6550419);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.5263296);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.3618516);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.2366717);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.1633741);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.1165696);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.09360895);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.07660921);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.07197292);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.06093413);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.04879146);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.04901223);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.04305128);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.03797344);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.02384379);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01412965);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.01037646);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.00684405);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.004194741);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.003090861);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.001766207);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0006623275);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0008831033);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.005761361);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01066144);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.0120257);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01077965);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.008938013);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.007228512);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.006005752);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.005073042);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.004546052);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.004112598);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.003986211);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.003667803);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.003282069);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.003289486);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.003082967);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002895448);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.00229437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001766207);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001513563);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001229228);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0009623395);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0008260675);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0006244483);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0003823949);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0004415516);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
