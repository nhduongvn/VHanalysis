#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Thu Feb 16 10:35:21 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(-1.310117,-0.5300564,7.029799,3.887081);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_18->SetBottomMargin(0.12);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.445367);
   
   TH1F *st_stack_183 = new TH1F("st_stack_183","",30,0,6);
   st_stack_183->SetMinimum(0);
   st_stack_183->SetMaximum(3.445367);
   st_stack_183->SetDirectory(0);
   st_stack_183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_183->SetLineColor(ci);
   st_stack_183->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_183->GetXaxis()->SetRange(1,30);
   st_stack_183->GetXaxis()->SetLabelFont(42);
   st_stack_183->GetXaxis()->SetTitleOffset(1);
   st_stack_183->GetXaxis()->SetTitleFont(42);
   st_stack_183->GetYaxis()->SetTitle("Events/0.2");
   st_stack_183->GetYaxis()->SetLabelFont(42);
   st_stack_183->GetYaxis()->SetTitleSize(0.037);
   st_stack_183->GetYaxis()->SetTitleFont(42);
   st_stack_183->GetZaxis()->SetLabelFont(42);
   st_stack_183->GetZaxis()->SetTitleOffset(1);
   st_stack_183->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_183);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.3937068);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.513382);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.531588);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,1.174293);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.7214165);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.3641219);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.2844702);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.2503338);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.1706821);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.1319942);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.1274427);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.1069608);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.1365457);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.104685);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.1069608);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.104685);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.03641219);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.04096371);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.02275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.02993297);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.05868642);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.05903837);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.05169537);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.04051879);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.02878636);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.02544379);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.02386839);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.01970868);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01733169);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.01703024);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.01560184);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01762798);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01543497);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01560184);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01543497);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.00965524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.007196591);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(3234);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1525253);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.7032945);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.7653235);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.5109148);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.2430217);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.1261555);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.09439189);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.08510253);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.07041935);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.06053067);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.05723445);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.04974303);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.03985435);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.03446053);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.03086465);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.02966602);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.01887838);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01018833);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.00839039);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.004494852);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.002696911);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.006760565);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01451713);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01514379);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01237332);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.008533645);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.006148443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.005318381);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.005049906);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.004593652);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.004258923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.004141339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.003860808);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.003455811);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.003213461);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.003041184);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002981547);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.002378452);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001747284);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001585635);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001160566);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(10352);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
