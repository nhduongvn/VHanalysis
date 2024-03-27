#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass()
{
//=========Macro generated from canvas: Z_mass/Z_mass
//=========  (Wed Mar 27 16:46:17 2024) by ROOT version 6.28/10
   TCanvas *Z_mass = new TCanvas("Z_mass", "Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass->SetHighLightColor(2);
   Z_mass->Range(-60,-0.01757676,340,0.1581908);
   Z_mass->SetFillColor(0);
   Z_mass->SetFillStyle(4000);
   Z_mass->SetBorderMode(0);
   Z_mass->SetBorderSize(2);
   Z_mass->SetLeftMargin(0.15);
   Z_mass->SetFrameFillStyle(1000);
   Z_mass->SetFrameBorderMode(0);
   Z_mass->SetFrameFillStyle(1000);
   Z_mass->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__49 = new TH1D("VH_DHZfirst_Z_mass__49","",200,0,2000);
   VH_DHZfirst_Z_mass__49->SetBinContent(6,0.00247518);
   VH_DHZfirst_Z_mass__49->SetBinContent(8,0.02229909);
   VH_DHZfirst_Z_mass__49->SetBinContent(9,0.1003442);
   VH_DHZfirst_Z_mass__49->SetBinContent(10,0.1339182);
   VH_DHZfirst_Z_mass__49->SetBinContent(11,0.09199862);
   VH_DHZfirst_Z_mass__49->SetBinContent(12,0.04459763);
   VH_DHZfirst_Z_mass__49->SetBinContent(13,0.01231447);
   VH_DHZfirst_Z_mass__49->SetBinContent(14,0.0009522289);
   VH_DHZfirst_Z_mass__49->SetBinContent(15,0.004283241);
   VH_DHZfirst_Z_mass__49->SetBinContent(16,0.004914888);
   VH_DHZfirst_Z_mass__49->SetBinContent(17,0.002038613);
   VH_DHZfirst_Z_mass__49->SetBinContent(18,0.009360662);
   VH_DHZfirst_Z_mass__49->SetBinContent(19,0.002444876);
   VH_DHZfirst_Z_mass__49->SetBinContent(23,0.002900489);
   VH_DHZfirst_Z_mass__49->SetBinContent(30,0.003346687);
   VH_DHZfirst_Z_mass__49->SetBinContent(38,0.00329684);
   VH_DHZfirst_Z_mass__49->SetBinContent(43,0.002718868);
   VH_DHZfirst_Z_mass__49->SetBinContent(54,0.002519259);
   VH_DHZfirst_Z_mass__49->SetBinContent(59,0.002482935);
   VH_DHZfirst_Z_mass__49->SetBinContent(65,0.002462404);
   VH_DHZfirst_Z_mass__49->SetBinContent(66,0.002523228);
   VH_DHZfirst_Z_mass__49->SetBinContent(71,0.001673473);
   VH_DHZfirst_Z_mass__49->SetBinContent(74,0.002643217);
   VH_DHZfirst_Z_mass__49->SetBinContent(88,0.002287799);
   VH_DHZfirst_Z_mass__49->SetBinContent(98,0.003379064);
   VH_DHZfirst_Z_mass__49->SetBinContent(105,0.003401715);
   VH_DHZfirst_Z_mass__49->SetBinContent(127,0.003196609);
   VH_DHZfirst_Z_mass__49->SetBinContent(129,0.002307947);
   VH_DHZfirst_Z_mass__49->SetBinContent(139,0.002780269);
   VH_DHZfirst_Z_mass__49->SetBinContent(158,0.001684346);
   VH_DHZfirst_Z_mass__49->SetBinContent(163,0.002882436);
   VH_DHZfirst_Z_mass__49->SetBinContent(172,0.002536508);
   VH_DHZfirst_Z_mass__49->SetBinContent(182,0.003313559);
   VH_DHZfirst_Z_mass__49->SetBinContent(201,0.0130337);
   VH_DHZfirst_Z_mass__49->SetBinError(6,0.00247518);
   VH_DHZfirst_Z_mass__49->SetBinError(8,0.00888222);
   VH_DHZfirst_Z_mass__49->SetBinError(9,0.02977384);
   VH_DHZfirst_Z_mass__49->SetBinError(10,0.02000679);
   VH_DHZfirst_Z_mass__49->SetBinError(11,0.01730427);
   VH_DHZfirst_Z_mass__49->SetBinError(12,0.011984);
   VH_DHZfirst_Z_mass__49->SetBinError(13,0.006617337);
   VH_DHZfirst_Z_mass__49->SetBinError(14,0.0009522289);
   VH_DHZfirst_Z_mass__49->SetBinError(15,0.003029432);
   VH_DHZfirst_Z_mass__49->SetBinError(16,0.003482429);
   VH_DHZfirst_Z_mass__49->SetBinError(17,0.002038613);
   VH_DHZfirst_Z_mass__49->SetBinError(18,0.0073429);
   VH_DHZfirst_Z_mass__49->SetBinError(19,0.002444876);
   VH_DHZfirst_Z_mass__49->SetBinError(23,0.002900489);
   VH_DHZfirst_Z_mass__49->SetBinError(30,0.002403835);
   VH_DHZfirst_Z_mass__49->SetBinError(38,0.00329684);
   VH_DHZfirst_Z_mass__49->SetBinError(43,0.002718868);
   VH_DHZfirst_Z_mass__49->SetBinError(54,0.002519259);
   VH_DHZfirst_Z_mass__49->SetBinError(59,0.002482935);
   VH_DHZfirst_Z_mass__49->SetBinError(65,0.002462404);
   VH_DHZfirst_Z_mass__49->SetBinError(66,0.002523228);
   VH_DHZfirst_Z_mass__49->SetBinError(71,0.001673473);
   VH_DHZfirst_Z_mass__49->SetBinError(74,0.002643217);
   VH_DHZfirst_Z_mass__49->SetBinError(88,0.002287799);
   VH_DHZfirst_Z_mass__49->SetBinError(98,0.003379064);
   VH_DHZfirst_Z_mass__49->SetBinError(105,0.003401715);
   VH_DHZfirst_Z_mass__49->SetBinError(127,0.003196609);
   VH_DHZfirst_Z_mass__49->SetBinError(129,0.002307947);
   VH_DHZfirst_Z_mass__49->SetBinError(139,0.002780269);
   VH_DHZfirst_Z_mass__49->SetBinError(158,0.001684346);
   VH_DHZfirst_Z_mass__49->SetBinError(163,0.002882436);
   VH_DHZfirst_Z_mass__49->SetBinError(172,0.002536508);
   VH_DHZfirst_Z_mass__49->SetBinError(182,0.003313559);
   VH_DHZfirst_Z_mass__49->SetBinError(201,0.006123874);
   VH_DHZfirst_Z_mass__49->SetEntries(172);

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
   Z_mass->Modified();
   Z_mass->cd();
   Z_mass->SetSelected(Z_mass);
}
