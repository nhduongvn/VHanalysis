#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_17_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_17/Sphericity_TT_tagOnly_17
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_17 = new TCanvas("Sphericity_TT_tagOnly_17", "Sphericity_TT_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_17->SetHighLightColor(2);
   Sphericity_TT_tagOnly_17->Range(-0.2,-1.4064,1.133333,5.982468);
   Sphericity_TT_tagOnly_17->SetFillColor(0);
   Sphericity_TT_tagOnly_17->SetFillStyle(4000);
   Sphericity_TT_tagOnly_17->SetBorderMode(0);
   Sphericity_TT_tagOnly_17->SetBorderSize(2);
   Sphericity_TT_tagOnly_17->SetLogy();
   Sphericity_TT_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1157 = new TH1D("VH_tagOnly_Sphericity__1157","",25,0,1);
   VH_tagOnly_Sphericity__1157->SetBinContent(1,92476.67);
   VH_tagOnly_Sphericity__1157->SetBinContent(2,79042.14);
   VH_tagOnly_Sphericity__1157->SetBinContent(3,44028.35);
   VH_tagOnly_Sphericity__1157->SetBinContent(4,25231.74);
   VH_tagOnly_Sphericity__1157->SetBinContent(5,14586.2);
   VH_tagOnly_Sphericity__1157->SetBinContent(6,8375.948);
   VH_tagOnly_Sphericity__1157->SetBinContent(7,4838.216);
   VH_tagOnly_Sphericity__1157->SetBinContent(8,2968.422);
   VH_tagOnly_Sphericity__1157->SetBinContent(9,1934.25);
   VH_tagOnly_Sphericity__1157->SetBinContent(10,1331.042);
   VH_tagOnly_Sphericity__1157->SetBinContent(11,959.554);
   VH_tagOnly_Sphericity__1157->SetBinContent(12,711.7485);
   VH_tagOnly_Sphericity__1157->SetBinContent(13,543.5004);
   VH_tagOnly_Sphericity__1157->SetBinContent(14,418.4122);
   VH_tagOnly_Sphericity__1157->SetBinContent(15,330.5454);
   VH_tagOnly_Sphericity__1157->SetBinContent(16,244.1536);
   VH_tagOnly_Sphericity__1157->SetBinContent(17,170.0163);
   VH_tagOnly_Sphericity__1157->SetBinContent(18,116.1525);
   VH_tagOnly_Sphericity__1157->SetBinContent(19,67.07816);
   VH_tagOnly_Sphericity__1157->SetBinContent(20,25.73857);
   VH_tagOnly_Sphericity__1157->SetBinContent(21,9.353417);
   VH_tagOnly_Sphericity__1157->SetBinContent(22,2.040813);
   VH_tagOnly_Sphericity__1157->SetBinContent(23,0.4300477);
   VH_tagOnly_Sphericity__1157->SetBinContent(24,0.4411163);
   VH_tagOnly_Sphericity__1157->SetBinError(1,94.1672);
   VH_tagOnly_Sphericity__1157->SetBinError(2,85.94928);
   VH_tagOnly_Sphericity__1157->SetBinError(3,64.31432);
   VH_tagOnly_Sphericity__1157->SetBinError(4,49.03542);
   VH_tagOnly_Sphericity__1157->SetBinError(5,37.4343);
   VH_tagOnly_Sphericity__1157->SetBinError(6,28.54579);
   VH_tagOnly_Sphericity__1157->SetBinError(7,21.71945);
   VH_tagOnly_Sphericity__1157->SetBinError(8,17.08861);
   VH_tagOnly_Sphericity__1157->SetBinError(9,13.79768);
   VH_tagOnly_Sphericity__1157->SetBinError(10,11.43002);
   VH_tagOnly_Sphericity__1157->SetBinError(11,9.724436);
   VH_tagOnly_Sphericity__1157->SetBinError(12,8.525517);
   VH_tagOnly_Sphericity__1157->SetBinError(13,7.36523);
   VH_tagOnly_Sphericity__1157->SetBinError(14,6.576878);
   VH_tagOnly_Sphericity__1157->SetBinError(15,5.779505);
   VH_tagOnly_Sphericity__1157->SetBinError(16,4.89808);
   VH_tagOnly_Sphericity__1157->SetBinError(17,4.102076);
   VH_tagOnly_Sphericity__1157->SetBinError(18,3.381885);
   VH_tagOnly_Sphericity__1157->SetBinError(19,2.501645);
   VH_tagOnly_Sphericity__1157->SetBinError(20,1.601165);
   VH_tagOnly_Sphericity__1157->SetBinError(21,0.9337152);
   VH_tagOnly_Sphericity__1157->SetBinError(22,0.4193626);
   VH_tagOnly_Sphericity__1157->SetBinError(23,0.1526005);
   VH_tagOnly_Sphericity__1157->SetBinError(24,0.2315628);
   VH_tagOnly_Sphericity__1157->SetEntries(4125860);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1157->SetLineColor(ci);
   VH_tagOnly_Sphericity__1157->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1157->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1157->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1157->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1157->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1157->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1157->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1157->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1157->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1157->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_17->Modified();
   Sphericity_TT_tagOnly_17->cd();
   Sphericity_TT_tagOnly_17->SetSelected(Sphericity_TT_tagOnly_17);
}
