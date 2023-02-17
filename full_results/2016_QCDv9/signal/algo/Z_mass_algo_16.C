#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-65.50587,-0.08976084,351.4899,0.6582462);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetFillStyle(4000);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15709);
   Z_mass_algo_16->SetRightMargin(0.1234783);
   Z_mass_algo_16->SetBottomMargin(0.12);
   Z_mass_algo_16->SetFrameFillStyle(1000);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameFillStyle(1000);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5834455);
   
   TH1F *st_stack_65 = new TH1F("st_stack_65","",40,0,400);
   st_stack_65->SetMinimum(0);
   st_stack_65->SetMaximum(0.5834455);
   st_stack_65->SetDirectory(0);
   st_stack_65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_65->SetLineColor(ci);
   st_stack_65->GetXaxis()->SetTitle("M_{Z} [GeV]");
   st_stack_65->GetXaxis()->SetRange(1,30);
   st_stack_65->GetXaxis()->SetLabelFont(42);
   st_stack_65->GetXaxis()->SetTitleOffset(1);
   st_stack_65->GetXaxis()->SetTitleFont(42);
   st_stack_65->GetYaxis()->SetTitle("Events/10.0");
   st_stack_65->GetYaxis()->SetLabelFont(42);
   st_stack_65->GetYaxis()->SetTitleSize(0.037);
   st_stack_65->GetYaxis()->SetTitleFont(42);
   st_stack_65->GetZaxis()->SetLabelFont(42);
   st_stack_65->GetZaxis()->SetTitleOffset(1);
   st_stack_65->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_65);
   
   
   TH1D *VbbHcc_algo_Z_mass_stack_1 = new TH1D("VbbHcc_algo_Z_mass_stack_1","",40,0,400);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(3,0.002966439);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(4,0.002804809);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(5,0.009015496);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(6,0.0279904);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(7,0.0517276);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(8,0.2166815);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(9,0.2922983);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(10,0.1921129);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(11,0.05762607);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(12,0.0269556);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(13,0.01793423);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(14,0.005877359);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(15,0.008716115);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(16,0.006001318);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(17,0.005876113);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(19,0.008479194);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(22,0.00323798);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(23,0.006430402);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(27,0.003274124);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(28,0.003235426);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(31,0.002837057);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(34,0.002491875);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(41,0.003229955);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(3,0.002966439);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(4,0.002804809);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(5,0.005213449);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(6,0.008986458);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(7,0.01374267);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(8,0.02559199);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(9,0.02936104);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(10,0.02361944);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(11,0.0129546);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(12,0.008997996);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(13,0.007043091);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(14,0.00415669);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(15,0.005060474);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(16,0.004243819);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(17,0.004155147);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(19,0.004907066);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(22,0.00323798);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(23,0.004546983);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(27,0.003274124);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(28,0.003235426);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(31,0.002837057);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(34,0.002491875);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(41,0.003229955);
   VbbHcc_algo_Z_mass_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_2 = new TH1D("VbbHcc_algo_Z_mass_stack_2","",40,0,400);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(4,0.0001643052);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(5,0.003363514);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(6,0.006793649);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(7,0.02295833);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(8,0.05899808);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(9,0.09666536);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(10,0.07006571);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(11,0.02518718);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(12,0.006869035);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(13,0.002851154);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(14,0.004663919);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(15,0.004923939);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(16,0.005040536);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(17,0.002311811);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(18,0.003518944);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(19,0.002466582);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(20,0.002331575);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(21,0.001096669);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(22,0.001173668);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(23,0.001575214);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(24,0.000774654);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(25,0.002016466);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(26,0.000404859);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(27,0.0007709847);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(28,0.001114317);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(29,0.0003712828);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(30,0.0004255094);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(31,0.0004042353);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(32,0.0004220871);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(33,0.0003675785);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(34,0.0003761703);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(36,0.001183278);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(37,0.0005116366);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(41,0.001161203);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(4,0.0001643052);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(5,0.001125262);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(6,0.001608354);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(7,0.002942227);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(8,0.004776537);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(9,0.006094612);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(10,0.005206027);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(11,0.003067404);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(12,0.001629525);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(13,0.001030105);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(14,0.001351489);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(15,0.001371457);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(16,0.001400405);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(17,0.0009167629);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(18,0.001177005);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(19,0.000960187);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(20,0.0009551016);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(21,0.0006393119);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(22,0.0006776178);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(23,0.0007877924);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(24,0.0005479065);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(25,0.00090281);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(26,0.000404859);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(27,0.0005453784);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(28,0.00064451);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(29,0.0003712828);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(30,0.0004255094);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(31,0.0004042353);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(32,0.0004220871);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(33,0.0003675785);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(34,0.0003761703);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(36,0.0006844458);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(37,0.0004387973);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(41,0.0006707842);
   VbbHcc_algo_Z_mass_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_1","ZHcc","F");

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
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
