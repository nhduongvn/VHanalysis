#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_tagOnly_16()
{
//=========Macro generated from canvas: Z_dR_ZJets_tagOnly_16/Z_dR_ZJets_tagOnly_16
//=========  (Fri May 24 12:42:17 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_tagOnly_16 = new TCanvas("Z_dR_ZJets_tagOnly_16", "Z_dR_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_tagOnly_16->SetHighLightColor(2);
   Z_dR_ZJets_tagOnly_16->Range(-1.2,-250.9801,6.8,2258.82);
   Z_dR_ZJets_tagOnly_16->SetFillColor(0);
   Z_dR_ZJets_tagOnly_16->SetFillStyle(4000);
   Z_dR_ZJets_tagOnly_16->SetBorderMode(0);
   Z_dR_ZJets_tagOnly_16->SetBorderSize(2);
   Z_dR_ZJets_tagOnly_16->SetLeftMargin(0.15);
   Z_dR_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_16->SetFrameBorderMode(0);
   Z_dR_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__853 = new TH1D("VH_tagOnly_Z_dR__853","",30,0,6);
   VH_tagOnly_Z_dR__853->SetBinContent(2,0.5906447);
   VH_tagOnly_Z_dR__853->SetBinContent(3,1329.487);
   VH_tagOnly_Z_dR__853->SetBinContent(4,1912.229);
   VH_tagOnly_Z_dR__853->SetBinContent(5,1750.567);
   VH_tagOnly_Z_dR__853->SetBinContent(6,1567.779);
   VH_tagOnly_Z_dR__853->SetBinContent(7,1127.092);
   VH_tagOnly_Z_dR__853->SetBinContent(8,803.7409);
   VH_tagOnly_Z_dR__853->SetBinContent(9,607.8123);
   VH_tagOnly_Z_dR__853->SetBinContent(10,511.2134);
   VH_tagOnly_Z_dR__853->SetBinContent(11,502.5465);
   VH_tagOnly_Z_dR__853->SetBinContent(12,484.3657);
   VH_tagOnly_Z_dR__853->SetBinContent(13,498.893);
   VH_tagOnly_Z_dR__853->SetBinContent(14,561.6073);
   VH_tagOnly_Z_dR__853->SetBinContent(15,607.9623);
   VH_tagOnly_Z_dR__853->SetBinContent(16,603.8082);
   VH_tagOnly_Z_dR__853->SetBinContent(17,555.5988);
   VH_tagOnly_Z_dR__853->SetBinContent(18,548.5532);
   VH_tagOnly_Z_dR__853->SetBinContent(19,490.2325);
   VH_tagOnly_Z_dR__853->SetBinContent(20,402.6433);
   VH_tagOnly_Z_dR__853->SetBinContent(21,347.5553);
   VH_tagOnly_Z_dR__853->SetBinContent(22,285.2166);
   VH_tagOnly_Z_dR__853->SetBinContent(23,253.5658);
   VH_tagOnly_Z_dR__853->SetBinContent(24,215.8102);
   VH_tagOnly_Z_dR__853->SetBinContent(25,215.8228);
   VH_tagOnly_Z_dR__853->SetBinContent(26,222.1754);
   VH_tagOnly_Z_dR__853->SetBinContent(27,224.8528);
   VH_tagOnly_Z_dR__853->SetBinContent(28,220.8754);
   VH_tagOnly_Z_dR__853->SetBinContent(29,186.4261);
   VH_tagOnly_Z_dR__853->SetBinContent(30,122.7091);
   VH_tagOnly_Z_dR__853->SetBinContent(31,71.4619);
   VH_tagOnly_Z_dR__853->SetBinError(2,0.2169443);
   VH_tagOnly_Z_dR__853->SetBinError(3,14.45557);
   VH_tagOnly_Z_dR__853->SetBinError(4,18.00877);
   VH_tagOnly_Z_dR__853->SetBinError(5,22.68813);
   VH_tagOnly_Z_dR__853->SetBinError(6,29.73792);
   VH_tagOnly_Z_dR__853->SetBinError(7,27.21543);
   VH_tagOnly_Z_dR__853->SetBinError(8,23.02077);
   VH_tagOnly_Z_dR__853->SetBinError(9,19.63905);
   VH_tagOnly_Z_dR__853->SetBinError(10,15.97226);
   VH_tagOnly_Z_dR__853->SetBinError(11,16.67192);
   VH_tagOnly_Z_dR__853->SetBinError(12,15.22581);
   VH_tagOnly_Z_dR__853->SetBinError(13,14.29761);
   VH_tagOnly_Z_dR__853->SetBinError(14,15.98732);
   VH_tagOnly_Z_dR__853->SetBinError(15,16.82764);
   VH_tagOnly_Z_dR__853->SetBinError(16,15.98518);
   VH_tagOnly_Z_dR__853->SetBinError(17,13.97509);
   VH_tagOnly_Z_dR__853->SetBinError(18,15.55261);
   VH_tagOnly_Z_dR__853->SetBinError(19,15.17226);
   VH_tagOnly_Z_dR__853->SetBinError(20,12.55004);
   VH_tagOnly_Z_dR__853->SetBinError(21,11.72113);
   VH_tagOnly_Z_dR__853->SetBinError(22,10.6909);
   VH_tagOnly_Z_dR__853->SetBinError(23,10.72185);
   VH_tagOnly_Z_dR__853->SetBinError(24,9.24736);
   VH_tagOnly_Z_dR__853->SetBinError(25,10.73422);
   VH_tagOnly_Z_dR__853->SetBinError(26,10.29632);
   VH_tagOnly_Z_dR__853->SetBinError(27,10.60513);
   VH_tagOnly_Z_dR__853->SetBinError(28,8.559227);
   VH_tagOnly_Z_dR__853->SetBinError(29,6.676253);
   VH_tagOnly_Z_dR__853->SetBinError(30,5.424813);
   VH_tagOnly_Z_dR__853->SetBinError(31,4.743714);
   VH_tagOnly_Z_dR__853->SetEntries(161332);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__853->SetLineColor(ci);
   VH_tagOnly_Z_dR__853->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__853->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__853->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__853->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__853->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__853->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__853->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__853->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__853->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__853->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__853->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__853->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__853->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__853->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__853->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_tagOnly_16->Modified();
   Z_dR_ZJets_tagOnly_16->cd();
   Z_dR_ZJets_tagOnly_16->SetSelected(Z_dR_ZJets_tagOnly_16);
}
