#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:47 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-0.01169553,453.3333,0.1052598);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__374 = new TH1D("VbbHcc_algo_Z_mass__374","",40,0,400);
   VbbHcc_algo_Z_mass__374->SetBinContent(6,0.004452184);
   VbbHcc_algo_Z_mass__374->SetBinContent(7,0.03686106);
   VbbHcc_algo_Z_mass__374->SetBinContent(8,0.04081648);
   VbbHcc_algo_Z_mass__374->SetBinContent(9,0.08910879);
   VbbHcc_algo_Z_mass__374->SetBinContent(10,0.08599853);
   VbbHcc_algo_Z_mass__374->SetBinContent(11,0.04499124);
   VbbHcc_algo_Z_mass__374->SetBinContent(12,0.03888928);
   VbbHcc_algo_Z_mass__374->SetBinContent(13,0.07017253);
   VbbHcc_algo_Z_mass__374->SetBinContent(14,0.02235801);
   VbbHcc_algo_Z_mass__374->SetBinContent(15,0.03181306);
   VbbHcc_algo_Z_mass__374->SetBinContent(16,0.01540084);
   VbbHcc_algo_Z_mass__374->SetBinContent(17,0.01611866);
   VbbHcc_algo_Z_mass__374->SetBinContent(18,0.006917431);
   VbbHcc_algo_Z_mass__374->SetBinContent(19,0.008153145);
   VbbHcc_algo_Z_mass__374->SetBinContent(20,0.01090327);
   VbbHcc_algo_Z_mass__374->SetBinContent(21,0.01231502);
   VbbHcc_algo_Z_mass__374->SetBinContent(23,0.01553815);
   VbbHcc_algo_Z_mass__374->SetBinContent(24,0.008568902);
   VbbHcc_algo_Z_mass__374->SetBinContent(25,0.01250355);
   VbbHcc_algo_Z_mass__374->SetBinContent(26,0.005020264);
   VbbHcc_algo_Z_mass__374->SetBinContent(27,0.001709508);
   VbbHcc_algo_Z_mass__374->SetBinContent(28,0.006839871);
   VbbHcc_algo_Z_mass__374->SetBinContent(29,0.0126051);
   VbbHcc_algo_Z_mass__374->SetBinContent(30,0.005720138);
   VbbHcc_algo_Z_mass__374->SetBinContent(31,0.01447287);
   VbbHcc_algo_Z_mass__374->SetBinContent(33,0.00741732);
   VbbHcc_algo_Z_mass__374->SetBinContent(34,0.009457948);
   VbbHcc_algo_Z_mass__374->SetBinContent(35,0.005068696);
   VbbHcc_algo_Z_mass__374->SetBinContent(36,0.003049768);
   VbbHcc_algo_Z_mass__374->SetBinContent(37,0.001404624);
   VbbHcc_algo_Z_mass__374->SetBinContent(38,0.007744791);
   VbbHcc_algo_Z_mass__374->SetBinContent(39,0.003460807);
   VbbHcc_algo_Z_mass__374->SetBinContent(40,0.002316375);
   VbbHcc_algo_Z_mass__374->SetBinContent(41,0.2040863);
   VbbHcc_algo_Z_mass__374->SetBinError(6,0.003150346);
   VbbHcc_algo_Z_mass__374->SetBinError(7,0.01018105);
   VbbHcc_algo_Z_mass__374->SetBinError(8,0.009997885);
   VbbHcc_algo_Z_mass__374->SetBinError(9,0.01643466);
   VbbHcc_algo_Z_mass__374->SetBinError(10,0.01632955);
   VbbHcc_algo_Z_mass__374->SetBinError(11,0.01204151);
   VbbHcc_algo_Z_mass__374->SetBinError(12,0.01107643);
   VbbHcc_algo_Z_mass__374->SetBinError(13,0.01393008);
   VbbHcc_algo_Z_mass__374->SetBinError(14,0.007636507);
   VbbHcc_algo_Z_mass__374->SetBinError(15,0.008667771);
   VbbHcc_algo_Z_mass__374->SetBinError(16,0.006530256);
   VbbHcc_algo_Z_mass__374->SetBinError(17,0.007682691);
   VbbHcc_algo_Z_mass__374->SetBinError(18,0.004022142);
   VbbHcc_algo_Z_mass__374->SetBinError(19,0.004098089);
   VbbHcc_algo_Z_mass__374->SetBinError(20,0.005646132);
   VbbHcc_algo_Z_mass__374->SetBinError(21,0.006711765);
   VbbHcc_algo_Z_mass__374->SetBinError(23,0.006686116);
   VbbHcc_algo_Z_mass__374->SetBinError(24,0.00503091);
   VbbHcc_algo_Z_mass__374->SetBinError(25,0.007362582);
   VbbHcc_algo_Z_mass__374->SetBinError(26,0.003550015);
   VbbHcc_algo_Z_mass__374->SetBinError(27,0.001709508);
   VbbHcc_algo_Z_mass__374->SetBinError(28,0.004123498);
   VbbHcc_algo_Z_mass__374->SetBinError(29,0.006911232);
   VbbHcc_algo_Z_mass__374->SetBinError(30,0.003345316);
   VbbHcc_algo_Z_mass__374->SetBinError(31,0.009015684);
   VbbHcc_algo_Z_mass__374->SetBinError(33,0.004302028);
   VbbHcc_algo_Z_mass__374->SetBinError(34,0.005496277);
   VbbHcc_algo_Z_mass__374->SetBinError(35,0.003616959);
   VbbHcc_algo_Z_mass__374->SetBinError(36,0.003049768);
   VbbHcc_algo_Z_mass__374->SetBinError(37,0.001404624);
   VbbHcc_algo_Z_mass__374->SetBinError(38,0.004731232);
   VbbHcc_algo_Z_mass__374->SetBinError(39,0.002485986);
   VbbHcc_algo_Z_mass__374->SetBinError(40,0.002316375);
   VbbHcc_algo_Z_mass__374->SetBinError(41,0.02581981);
   VbbHcc_algo_Z_mass__374->SetEntries(352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass__374->SetFillColor(ci);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
