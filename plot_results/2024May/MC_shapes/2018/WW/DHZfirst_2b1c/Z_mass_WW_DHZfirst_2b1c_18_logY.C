#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_WW_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Z_mass_WW_DHZfirst_2b1c_18/Z_mass_WW_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:18 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_WW_DHZfirst_2b1c_18 = new TCanvas("Z_mass_WW_DHZfirst_2b1c_18", "Z_mass_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   Z_mass_WW_DHZfirst_2b1c_18->Range(-60,-1.242951,340,1.068353);
   Z_mass_WW_DHZfirst_2b1c_18->SetFillColor(0);
   Z_mass_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   Z_mass_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   Z_mass_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   Z_mass_WW_DHZfirst_2b1c_18->SetLogy();
   Z_mass_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Z_mass_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Z_mass_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Z_mass__3624 = new TH1D("VH_DHZfirst_2b1c_Z_mass__3624","",200,0,2000);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(5,0.5311244);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(6,1.089406);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(7,0.6166774);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(8,0.9331691);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(9,1.443616);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(10,0.5554895);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(12,0.6753953);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(13,1.467753);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(15,1.230926);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(16,1.807077);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(17,0.4746458);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(20,1.218664);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(21,0.4776192);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(22,2.139855);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(23,3.628054);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(25,0.1946298);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(26,0.5219524);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(27,0.6551195);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(31,0.5011123);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(32,0.6975118);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(33,0.6948288);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(35,1.093628);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(37,0.7247746);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(44,0.3991075);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(47,1.038043);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(50,1.038073);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(52,0.4628393);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(70,1.523043);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(81,1.239191);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(86,0.5092988);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(114,0.5284769);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(152,0.4429223);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(157,1.257271);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(192,1.707942);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinContent(201,0.4815663);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(5,0.5311244);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(6,0.7775795);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(7,0.6166774);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(8,0.6610455);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(9,1.074306);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(10,0.5554895);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(12,0.6753953);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(13,1.467753);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(15,0.8989771);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(16,1.327636);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(17,0.4746458);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(20,0.861752);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(21,0.4776192);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(22,2.139855);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(23,2.768715);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(25,0.1946298);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(26,0.5219524);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(27,0.6551195);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(31,0.5011123);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(32,0.6975118);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(33,0.6948288);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(35,1.093628);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(37,0.7247746);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(44,0.3991075);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(47,0.7356839);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(50,0.7431302);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(52,0.4628393);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(70,1.082508);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(81,0.8929372);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(86,0.5092988);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(114,0.5284769);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(152,0.4429223);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(157,1.257271);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(192,1.707942);
   VH_DHZfirst_2b1c_Z_mass__3624->SetBinError(201,0.4815663);
   VH_DHZfirst_2b1c_Z_mass__3624->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_mass__3624->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_mass__3624->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_2b1c_Z_mass__3624->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_2b1c_Z_mass__3624->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass__3624->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Z_mass__3624->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass__3624->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass__3624->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_WW_DHZfirst_2b1c_18->Modified();
   Z_mass_WW_DHZfirst_2b1c_18->cd();
   Z_mass_WW_DHZfirst_2b1c_18->SetSelected(Z_mass_WW_DHZfirst_2b1c_18);
}
