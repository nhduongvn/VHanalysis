#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_2b1c_18/Sphericity_WW_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_2b1c_18 = new TCanvas("Sphericity_WW_tagFirst_2b1c_18", "Sphericity_WW_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WW_tagFirst_2b1c_18->Range(-0.2,-0.9126263,1.133333,2.55157);
   Sphericity_WW_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_WW_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WW_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_WW_tagFirst_2b1c_18->SetLogy();
   Sphericity_WW_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2604 = new TH1D("VH_tagFirst_2b1c_Sphericity__2604","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(1,84.64505);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(2,53.37429);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(3,38.87294);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(4,23.88318);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(5,16.04735);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(6,8.60362);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(7,1.075681);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(8,3.751077);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(10,2.032048);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(11,0.8645198);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(13,1.84946);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinContent(15,0.5430295);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(1,9.234773);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(2,6.553785);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(3,6.19672);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(4,4.75747);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(5,3.680798);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(6,2.80009);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(7,0.6461506);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(8,1.710752);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(10,1.487269);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(11,0.8645198);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(13,1.84946);
   VH_tagFirst_2b1c_Sphericity__2604->SetBinError(15,0.5430295);
   VH_tagFirst_2b1c_Sphericity__2604->SetEntries(320);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2604->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2604->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2604->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2604->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2604->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2604->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2604->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2604->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_2b1c_18->Modified();
   Sphericity_WW_tagFirst_2b1c_18->cd();
   Sphericity_WW_tagFirst_2b1c_18->SetSelected(Sphericity_WW_tagFirst_2b1c_18);
}
