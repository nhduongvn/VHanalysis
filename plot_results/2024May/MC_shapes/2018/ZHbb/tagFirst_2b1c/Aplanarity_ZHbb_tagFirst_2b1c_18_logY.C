#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagFirst_2b1c_18/Aplanarity_ZHbb_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagFirst_2b1c_18 = new TCanvas("Aplanarity_ZHbb_tagFirst_2b1c_18", "Aplanarity_ZHbb_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHbb_tagFirst_2b1c_18->Range(-0.2,-4.318071,1.133333,3.643276);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetLogy();
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2616 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2616","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(1,371.1863);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(2,38.07276);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(3,8.899885);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(4,2.905408);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(5,1.315238);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(6,0.6316628);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(7,0.348503);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(8,0.2050872);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(9,0.1209203);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(10,0.07724208);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(11,0.07831264);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(12,0.0291208);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(13,0.01626813);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(14,0.03151716);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(15,0.005439796);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(16,0.006336013);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(17,0.004295269);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(18,0.0026845);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(19,0.00132109);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinContent(21,0.0006013037);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(1,1.162598);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(2,0.3420163);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(3,0.1685355);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(4,0.09620179);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(5,0.06040549);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(6,0.04344494);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(7,0.02878448);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(8,0.02882008);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(9,0.01830291);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(10,0.01366576);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(11,0.0196257);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(12,0.00720413);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(13,0.005626751);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(14,0.01258208);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(15,0.003542867);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(16,0.003815363);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(17,0.003772077);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(18,0.002197769);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(19,0.0009392297);
   VH_tagFirst_2b1c_Aplanarity__2616->SetBinError(21,0.0006013037);
   VH_tagFirst_2b1c_Aplanarity__2616->SetEntries(376321);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2616->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2616->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2616->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2616->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2616->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2616->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2616->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2616->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagFirst_2b1c_18->Modified();
   Aplanarity_ZHbb_tagFirst_2b1c_18->cd();
   Aplanarity_ZHbb_tagFirst_2b1c_18->SetSelected(Aplanarity_ZHbb_tagFirst_2b1c_18);
}
