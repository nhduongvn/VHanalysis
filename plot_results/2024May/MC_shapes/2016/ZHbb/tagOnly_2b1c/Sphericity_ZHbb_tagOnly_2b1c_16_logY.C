#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_2b1c_16/Sphericity_ZHbb_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_2b1c_16 = new TCanvas("Sphericity_ZHbb_tagOnly_2b1c_16", "Sphericity_ZHbb_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_2b1c_16->Range(-0.2,-4.645389,1.133333,3.068892);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetLogy();
   Sphericity_ZHbb_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3304 = new TH1D("VH_tagOnly_2b1c_Sphericity__3304","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(1,104.6924);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(2,95.22047);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(3,55.3074);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(4,34.87521);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(5,21.50218);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(6,10.96966);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(7,4.746608);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(8,2.311879);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(9,1.406757);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(10,1.064);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(11,0.6836205);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(12,0.5501768);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(13,0.4016025);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(14,0.3032019);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(15,0.2303159);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(16,0.1754203);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(17,0.1109497);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(18,0.07829008);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(19,0.04068154);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(20,0.008619768);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(21,0.004224512);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(22,0.001839503);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinContent(23,0.0002673435);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(1,0.2978151);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(2,0.283941);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(3,0.2166141);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(4,0.1735868);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(5,0.1377602);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(6,0.09822489);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(7,0.06356535);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(8,0.04321467);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(9,0.03411336);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(10,0.03004664);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(11,0.02359916);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(12,0.02094466);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(13,0.01800572);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(14,0.01574352);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(15,0.01357721);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(16,0.01181237);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(17,0.009263612);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(18,0.007921514);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(19,0.005613776);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(20,0.002343433);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(21,0.001920461);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(22,0.001521831);
   VH_tagOnly_2b1c_Sphericity__3304->SetBinError(23,0.0002673435);
   VH_tagOnly_2b1c_Sphericity__3304->SetEntries(567660);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3304->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3304->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3304->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3304->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3304->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3304->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3304->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3304->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_2b1c_16->Modified();
   Sphericity_ZHbb_tagOnly_2b1c_16->cd();
   Sphericity_ZHbb_tagOnly_2b1c_16->SetSelected(Sphericity_ZHbb_tagOnly_2b1c_16);
}
