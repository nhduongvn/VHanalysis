#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_2b1c_17/Sphericity_TT_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_2b1c_17 = new TCanvas("Sphericity_TT_tagOnly_2b1c_17", "Sphericity_TT_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_TT_tagOnly_2b1c_17->Range(-0.2,-1.377288,1.133333,6.362402);
   Sphericity_TT_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_TT_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_TT_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_TT_tagOnly_2b1c_17->SetLogy();
   Sphericity_TT_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3317 = new TH1D("VH_tagOnly_2b1c_Sphericity__3317","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(1,204589.8);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(2,183153.2);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(3,101817.5);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(4,57556.86);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(5,32561.17);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(6,18118.52);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(7,10050.57);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(8,5986.942);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(9,3820.226);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(10,2574.473);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(11,1826.007);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(12,1328.866);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(13,993.1344);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(14,756.5598);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(15,581.9433);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(16,426.6509);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(17,306.8221);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(18,208.8953);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(19,121.2153);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(20,45.57992);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(21,16.70054);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(22,4.376528);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(23,0.7228081);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinContent(24,0.4985527);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(1,134.7195);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(2,125.8503);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(3,94.14967);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(4,71.23847);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(5,53.89238);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(6,40.36342);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(7,30.23444);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(8,23.37463);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(9,18.71054);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(10,15.42581);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(11,12.97428);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(12,11.23589);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(13,9.692556);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(14,8.580124);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(15,7.413052);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(16,6.277514);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(17,5.340836);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(18,4.463455);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(19,3.362112);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(20,2.035693);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(21,1.182309);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(22,0.6312628);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(23,0.1966824);
   VH_tagOnly_2b1c_Sphericity__3317->SetBinError(24,0.235175);
   VH_tagOnly_2b1c_Sphericity__3317->SetEntries(9913948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3317->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3317->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3317->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3317->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3317->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3317->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3317->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3317->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_2b1c_17->Modified();
   Sphericity_TT_tagOnly_2b1c_17->cd();
   Sphericity_TT_tagOnly_2b1c_17->SetSelected(Sphericity_TT_tagOnly_2b1c_17);
}
