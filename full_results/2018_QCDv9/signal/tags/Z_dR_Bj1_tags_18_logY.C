#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Thu Feb 16 10:37:18 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.310117,0.5174023,7.029799,2.670687);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLogy();
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(224.6237);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(5.967556);
   st_stack_55->SetMaximum(285.3375);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleSize(0.037);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.382328);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.488348);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,1.4929);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,1.158363);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.6986589);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.3641219);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.277643);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.2457823);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.1661306);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.1319942);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.1251669);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.104685);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.13427);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.104685);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.104685);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.104685);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.03641219);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.04096371);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.02275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.02949725);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.05819902);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.05828794);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.05134353);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.03987457);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.02878636);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.02513661);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.02365041);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01944412);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01733169);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.0168775);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.01543497);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.01748046);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.01543497);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.01543497);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.01543497);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.00965524);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.007196591);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.1456332);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.6868134);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.7533372);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.4992282);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.2370285);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.1252565);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.09079601);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.08150665);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.06802209);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.05873273);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.05573616);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.04914371);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.04045367);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.03386122);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.03056499);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.03086465);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.01857872);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01048799);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.008090734);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.004794509);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.002696911);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.006606056);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01434602);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01502473);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01223099);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.008427764);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.006126498);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.005216094);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.004942066);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.004514785);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.004195195);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.004086774);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.003837479);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.003481697);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.003185395);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.003026385);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.003041184);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.0023595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001772794);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001557062);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.001198627);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
