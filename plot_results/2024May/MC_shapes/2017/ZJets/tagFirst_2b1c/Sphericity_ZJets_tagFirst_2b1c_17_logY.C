#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_2b1c_17/Sphericity_ZJets_tagFirst_2b1c_17
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_2b1c_17 = new TCanvas("Sphericity_ZJets_tagFirst_2b1c_17", "Sphericity_ZJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_2b1c_17->Range(-0.2,-2.42275,1.133333,5.001893);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_2b1c_17->SetLogy();
   Sphericity_ZJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2594 = new TH1D("VH_tagFirst_2b1c_Sphericity__2594","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(1,9591.344);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(2,7278.372);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(3,4229.881);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(4,2449.478);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(5,1393.547);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(6,757.887);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(7,391.2233);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(8,227.6481);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(9,146.4011);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(10,102.2511);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(11,73.29306);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(12,59.35768);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(13,46.37466);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(14,37.29875);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(15,30.22262);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(16,18.5951);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(17,21.93913);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(18,11.42439);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(19,5.47318);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(20,2.053782);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(21,0.5740378);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(22,0.06200808);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinContent(23,0.04175844);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(1,67.98532);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(2,69.15611);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(3,47.43107);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(4,34.75672);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(5,24.8735);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(6,18.46269);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(7,13.75347);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(8,7.818789);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(9,5.989929);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(10,4.663513);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(11,3.750107);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(12,3.176943);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(13,2.94044);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(14,2.960065);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(15,2.475261);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(16,1.574477);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(17,5.125641);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(18,1.399665);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(19,1.039949);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(20,0.5616157);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(21,0.2432358);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(22,0.06200808);
   VH_tagFirst_2b1c_Sphericity__2594->SetBinError(23,0.04175844);
   VH_tagFirst_2b1c_Sphericity__2594->SetEntries(202500);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2594->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2594->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2594->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2594->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2594->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2594->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2594->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2594->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_2b1c_17->Modified();
   Sphericity_ZJets_tagFirst_2b1c_17->cd();
   Sphericity_ZJets_tagFirst_2b1c_17->SetSelected(Sphericity_ZJets_tagFirst_2b1c_17);
}
