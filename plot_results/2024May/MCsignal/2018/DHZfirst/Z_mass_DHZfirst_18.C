#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_18()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_18/Z_mass_DHZfirst_18
//=========  (Thu May 23 13:53:21 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_18 = new TCanvas("Z_mass_DHZfirst_18", "Z_mass_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_DHZfirst_18->SetHighLightColor(2);
   Z_mass_DHZfirst_18->Range(-60,-0.02044939,340,0.1840445);
   Z_mass_DHZfirst_18->SetFillColor(0);
   Z_mass_DHZfirst_18->SetFillStyle(4000);
   Z_mass_DHZfirst_18->SetBorderMode(0);
   Z_mass_DHZfirst_18->SetBorderSize(2);
   Z_mass_DHZfirst_18->SetLeftMargin(0.15);
   Z_mass_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_18->SetFrameBorderMode(0);
   Z_mass_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__49 = new TH1D("VH_DHZfirst_Z_mass__49","",200,0,2000);
   VH_DHZfirst_Z_mass__49->SetBinContent(6,0.005665383);
   VH_DHZfirst_Z_mass__49->SetBinContent(7,0.01334314);
   VH_DHZfirst_Z_mass__49->SetBinContent(8,0.04861331);
   VH_DHZfirst_Z_mass__49->SetBinContent(9,0.1558048);
   VH_DHZfirst_Z_mass__49->SetBinContent(10,0.1480509);
   VH_DHZfirst_Z_mass__49->SetBinContent(11,0.07084803);
   VH_DHZfirst_Z_mass__49->SetBinContent(12,0.04575352);
   VH_DHZfirst_Z_mass__49->SetBinContent(13,0.006619411);
   VH_DHZfirst_Z_mass__49->SetBinContent(14,0.0009522289);
   VH_DHZfirst_Z_mass__49->SetBinContent(15,0.008322446);
   VH_DHZfirst_Z_mass__49->SetBinContent(16,0.004911127);
   VH_DHZfirst_Z_mass__49->SetBinContent(17,0.002367026);
   VH_DHZfirst_Z_mass__49->SetBinContent(18,0.00619684);
   VH_DHZfirst_Z_mass__49->SetBinContent(19,0.003008963);
   VH_DHZfirst_Z_mass__49->SetBinContent(21,0.003026346);
   VH_DHZfirst_Z_mass__49->SetBinContent(22,0.006161511);
   VH_DHZfirst_Z_mass__49->SetBinContent(23,0.007481658);
   VH_DHZfirst_Z_mass__49->SetBinContent(26,0.002869545);
   VH_DHZfirst_Z_mass__49->SetBinContent(28,0.002134457);
   VH_DHZfirst_Z_mass__49->SetBinContent(37,0.003662716);
   VH_DHZfirst_Z_mass__49->SetBinContent(42,0.009208922);
   VH_DHZfirst_Z_mass__49->SetBinContent(75,0.002182008);
   VH_DHZfirst_Z_mass__49->SetBinContent(92,0.002656642);
   VH_DHZfirst_Z_mass__49->SetBinContent(96,0.004923152);
   VH_DHZfirst_Z_mass__49->SetBinContent(97,0.002329829);
   VH_DHZfirst_Z_mass__49->SetBinContent(101,0.003934553);
   VH_DHZfirst_Z_mass__49->SetBinContent(120,0.002765744);
   VH_DHZfirst_Z_mass__49->SetBinContent(123,0.002383002);
   VH_DHZfirst_Z_mass__49->SetBinContent(124,0.002084716);
   VH_DHZfirst_Z_mass__49->SetBinContent(127,0.003196609);
   VH_DHZfirst_Z_mass__49->SetBinContent(156,0.002450174);
   VH_DHZfirst_Z_mass__49->SetBinContent(157,0.002198693);
   VH_DHZfirst_Z_mass__49->SetBinContent(167,0.003484672);
   VH_DHZfirst_Z_mass__49->SetBinContent(201,0.01804218);
   VH_DHZfirst_Z_mass__49->SetBinError(6,0.004020411);
   VH_DHZfirst_Z_mass__49->SetBinError(7,0.006042804);
   VH_DHZfirst_Z_mass__49->SetBinError(8,0.01273241);
   VH_DHZfirst_Z_mass__49->SetBinError(9,0.02319487);
   VH_DHZfirst_Z_mass__49->SetBinError(10,0.02077295);
   VH_DHZfirst_Z_mass__49->SetBinError(11,0.01484836);
   VH_DHZfirst_Z_mass__49->SetBinError(12,0.01240703);
   VH_DHZfirst_Z_mass__49->SetBinError(13,0.00472312);
   VH_DHZfirst_Z_mass__49->SetBinError(14,0.0009522289);
   VH_DHZfirst_Z_mass__49->SetBinError(15,0.004426421);
   VH_DHZfirst_Z_mass__49->SetBinError(16,0.003479946);
   VH_DHZfirst_Z_mass__49->SetBinError(17,0.002367026);
   VH_DHZfirst_Z_mass__49->SetBinError(18,0.004547399);
   VH_DHZfirst_Z_mass__49->SetBinError(19,0.003008963);
   VH_DHZfirst_Z_mass__49->SetBinError(21,0.003026346);
   VH_DHZfirst_Z_mass__49->SetBinError(22,0.004359318);
   VH_DHZfirst_Z_mass__49->SetBinError(23,0.004348149);
   VH_DHZfirst_Z_mass__49->SetBinError(26,0.002869545);
   VH_DHZfirst_Z_mass__49->SetBinError(28,0.002134457);
   VH_DHZfirst_Z_mass__49->SetBinError(37,0.003662716);
   VH_DHZfirst_Z_mass__49->SetBinError(42,0.007134655);
   VH_DHZfirst_Z_mass__49->SetBinError(75,0.002182008);
   VH_DHZfirst_Z_mass__49->SetBinError(92,0.002656642);
   VH_DHZfirst_Z_mass__49->SetBinError(96,0.004923152);
   VH_DHZfirst_Z_mass__49->SetBinError(97,0.002329829);
   VH_DHZfirst_Z_mass__49->SetBinError(101,0.003934553);
   VH_DHZfirst_Z_mass__49->SetBinError(120,0.002765744);
   VH_DHZfirst_Z_mass__49->SetBinError(123,0.002383002);
   VH_DHZfirst_Z_mass__49->SetBinError(124,0.002084716);
   VH_DHZfirst_Z_mass__49->SetBinError(127,0.003196609);
   VH_DHZfirst_Z_mass__49->SetBinError(156,0.002450174);
   VH_DHZfirst_Z_mass__49->SetBinError(157,0.002198693);
   VH_DHZfirst_Z_mass__49->SetBinError(167,0.003484672);
   VH_DHZfirst_Z_mass__49->SetBinError(201,0.006964659);
   VH_DHZfirst_Z_mass__49->SetEntries(219);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__49->SetLineColor(ci);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_DHZfirst_18->Modified();
   Z_mass_DHZfirst_18->cd();
   Z_mass_DHZfirst_18->SetSelected(Z_mass_DHZfirst_18);
}
