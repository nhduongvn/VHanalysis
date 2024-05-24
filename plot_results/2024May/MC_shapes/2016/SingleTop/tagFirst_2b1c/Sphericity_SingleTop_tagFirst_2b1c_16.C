#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_2b1c_16/Sphericity_SingleTop_tagFirst_2b1c_16
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_2b1c_16 = new TCanvas("Sphericity_SingleTop_tagFirst_2b1c_16", "Sphericity_SingleTop_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_2b1c_16->Range(-0.2,-2503.297,1.133333,22529.67);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2599 = new TH1D("VH_tagFirst_2b1c_Sphericity__2599","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(1,19072.74);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(2,16774.48);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(3,9621.757);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(4,5482.764);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(5,3053.204);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(6,1625.647);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(7,845.516);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(8,475.8307);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(9,309.5954);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(10,204.3695);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(11,147.6139);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(12,103.318);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(13,79.72832);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(14,63.95221);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(15,47.58108);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(16,31.44706);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(17,23.98965);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(18,16.31011);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(19,9.860843);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(20,3.085049);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(21,2.476781);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(22,0.1520035);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinContent(23,0.2521655);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(1,49.05354);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(2,45.14577);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(3,34.55957);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(4,26.58029);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(5,20.22617);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(6,15.00965);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(7,10.92927);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(8,8.139816);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(9,6.729838);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(10,5.415498);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(11,4.661162);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(12,3.87552);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(13,3.377489);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(14,3.129641);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(15,2.598686);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(16,2.097703);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(17,1.859944);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(18,1.430752);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(19,1.206457);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(20,0.6764225);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(21,0.677812);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(22,0.0708232);
   VH_tagFirst_2b1c_Sphericity__2599->SetBinError(23,0.2186029);
   VH_tagFirst_2b1c_Sphericity__2599->SetEntries(1010893);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2599->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2599->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2599->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2599->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2599->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2599->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2599->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2599->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_2b1c_16->Modified();
   Sphericity_SingleTop_tagFirst_2b1c_16->cd();
   Sphericity_SingleTop_tagFirst_2b1c_16->SetSelected(Sphericity_SingleTop_tagFirst_2b1c_16);
}
