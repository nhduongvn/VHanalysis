#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_16()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_16/Z_mass_DHZfirst_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_16 = new TCanvas("Z_mass_DHZfirst_16", "Z_mass_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_DHZfirst_16->SetHighLightColor(2);
   Z_mass_DHZfirst_16->Range(-60,-0.01273771,340,0.1146394);
   Z_mass_DHZfirst_16->SetFillColor(0);
   Z_mass_DHZfirst_16->SetFillStyle(4000);
   Z_mass_DHZfirst_16->SetBorderMode(0);
   Z_mass_DHZfirst_16->SetBorderSize(2);
   Z_mass_DHZfirst_16->SetLeftMargin(0.15);
   Z_mass_DHZfirst_16->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_16->SetFrameBorderMode(0);
   Z_mass_DHZfirst_16->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__145 = new TH1D("VH_DHZfirst_Z_mass__145","",200,0,2000);
   VH_DHZfirst_Z_mass__145->SetBinContent(5,0.002010929);
   VH_DHZfirst_Z_mass__145->SetBinContent(6,0.0009357118);
   VH_DHZfirst_Z_mass__145->SetBinContent(8,0.01433384);
   VH_DHZfirst_Z_mass__145->SetBinContent(9,0.06330966);
   VH_DHZfirst_Z_mass__145->SetBinContent(10,0.09704922);
   VH_DHZfirst_Z_mass__145->SetBinContent(11,0.04130189);
   VH_DHZfirst_Z_mass__145->SetBinContent(12,0.01922141);
   VH_DHZfirst_Z_mass__145->SetBinContent(13,0.005563333);
   VH_DHZfirst_Z_mass__145->SetBinContent(14,0.006846089);
   VH_DHZfirst_Z_mass__145->SetBinContent(15,0.00686838);
   VH_DHZfirst_Z_mass__145->SetBinContent(16,0.004173192);
   VH_DHZfirst_Z_mass__145->SetBinContent(18,0.001602448);
   VH_DHZfirst_Z_mass__145->SetBinContent(19,0.001855691);
   VH_DHZfirst_Z_mass__145->SetBinContent(25,0.002469495);
   VH_DHZfirst_Z_mass__145->SetBinContent(27,0.0023668);
   VH_DHZfirst_Z_mass__145->SetBinContent(34,0.002002857);
   VH_DHZfirst_Z_mass__145->SetBinContent(36,0.00206607);
   VH_DHZfirst_Z_mass__145->SetBinContent(38,0.004040244);
   VH_DHZfirst_Z_mass__145->SetBinContent(42,0.001842669);
   VH_DHZfirst_Z_mass__145->SetBinContent(56,0.002094921);
   VH_DHZfirst_Z_mass__145->SetBinContent(60,0.002694071);
   VH_DHZfirst_Z_mass__145->SetBinContent(76,0.002363608);
   VH_DHZfirst_Z_mass__145->SetBinContent(78,0.00333132);
   VH_DHZfirst_Z_mass__145->SetBinContent(81,0.001536546);
   VH_DHZfirst_Z_mass__145->SetBinContent(89,0.00197106);
   VH_DHZfirst_Z_mass__145->SetBinContent(92,0.002816038);
   VH_DHZfirst_Z_mass__145->SetBinContent(97,0.001696123);
   VH_DHZfirst_Z_mass__145->SetBinContent(114,0.003600833);
   VH_DHZfirst_Z_mass__145->SetBinContent(116,0.001685004);
   VH_DHZfirst_Z_mass__145->SetBinContent(123,0.002102686);
   VH_DHZfirst_Z_mass__145->SetBinContent(135,0.001377241);
   VH_DHZfirst_Z_mass__145->SetBinContent(149,0.002110621);
   VH_DHZfirst_Z_mass__145->SetBinContent(174,0.001811741);
   VH_DHZfirst_Z_mass__145->SetBinContent(175,0.002244899);
   VH_DHZfirst_Z_mass__145->SetBinContent(179,0.002038576);
   VH_DHZfirst_Z_mass__145->SetBinContent(182,0.002433198);
   VH_DHZfirst_Z_mass__145->SetBinContent(187,0.001958619);
   VH_DHZfirst_Z_mass__145->SetBinContent(201,0.002242986);
   VH_DHZfirst_Z_mass__145->SetBinError(5,0.002010929);
   VH_DHZfirst_Z_mass__145->SetBinError(6,0.0009357118);
   VH_DHZfirst_Z_mass__145->SetBinError(8,0.005107922);
   VH_DHZfirst_Z_mass__145->SetBinError(9,0.01130385);
   VH_DHZfirst_Z_mass__145->SetBinError(10,0.01389863);
   VH_DHZfirst_Z_mass__145->SetBinError(11,0.009068982);
   VH_DHZfirst_Z_mass__145->SetBinError(12,0.006249302);
   VH_DHZfirst_Z_mass__145->SetBinError(13,0.003246007);
   VH_DHZfirst_Z_mass__145->SetBinError(14,0.00345077);
   VH_DHZfirst_Z_mass__145->SetBinError(15,0.00346953);
   VH_DHZfirst_Z_mass__145->SetBinError(16,0.002994263);
   VH_DHZfirst_Z_mass__145->SetBinError(18,0.001602448);
   VH_DHZfirst_Z_mass__145->SetBinError(19,0.001855691);
   VH_DHZfirst_Z_mass__145->SetBinError(25,0.002469495);
   VH_DHZfirst_Z_mass__145->SetBinError(27,0.0023668);
   VH_DHZfirst_Z_mass__145->SetBinError(34,0.002002857);
   VH_DHZfirst_Z_mass__145->SetBinError(36,0.00206607);
   VH_DHZfirst_Z_mass__145->SetBinError(38,0.0028617);
   VH_DHZfirst_Z_mass__145->SetBinError(42,0.001842669);
   VH_DHZfirst_Z_mass__145->SetBinError(56,0.002094921);
   VH_DHZfirst_Z_mass__145->SetBinError(60,0.002694071);
   VH_DHZfirst_Z_mass__145->SetBinError(76,0.002363608);
   VH_DHZfirst_Z_mass__145->SetBinError(78,0.002355947);
   VH_DHZfirst_Z_mass__145->SetBinError(81,0.001536546);
   VH_DHZfirst_Z_mass__145->SetBinError(89,0.00197106);
   VH_DHZfirst_Z_mass__145->SetBinError(92,0.002816038);
   VH_DHZfirst_Z_mass__145->SetBinError(97,0.001696123);
   VH_DHZfirst_Z_mass__145->SetBinError(114,0.002546874);
   VH_DHZfirst_Z_mass__145->SetBinError(116,0.001685004);
   VH_DHZfirst_Z_mass__145->SetBinError(123,0.002102686);
   VH_DHZfirst_Z_mass__145->SetBinError(135,0.001377241);
   VH_DHZfirst_Z_mass__145->SetBinError(149,0.002110621);
   VH_DHZfirst_Z_mass__145->SetBinError(174,0.001811741);
   VH_DHZfirst_Z_mass__145->SetBinError(175,0.002244899);
   VH_DHZfirst_Z_mass__145->SetBinError(179,0.002038576);
   VH_DHZfirst_Z_mass__145->SetBinError(182,0.002433198);
   VH_DHZfirst_Z_mass__145->SetBinError(187,0.001958619);
   VH_DHZfirst_Z_mass__145->SetBinError(201,0.002242986);
   VH_DHZfirst_Z_mass__145->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__145->SetLineColor(ci);
   VH_DHZfirst_Z_mass__145->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__145->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__145->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__145->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__145->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__145->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__145->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__145->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__145->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__145->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_DHZfirst_16->Modified();
   Z_mass_DHZfirst_16->cd();
   Z_mass_DHZfirst_16->SetSelected(Z_mass_DHZfirst_16);
}
