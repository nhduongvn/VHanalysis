void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1243.123,1.133333,11188.1);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,9471.41);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,7776.922);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,4416.191);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2557.893);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1480.662);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,870.8756);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,531.741);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,329.6847);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,227.7238);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,146.2624);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,104.3643);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,75.90202);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,55.77814);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,44.35566);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,34.28327);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,26.45025);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,16.37109);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,10.6394);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.713822);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.740809);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.179435);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.4581474);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,31.00842);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,27.47315);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,20.48917);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,16.36441);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,11.57156);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,9.164846);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,7.958718);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,5.677479);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,5.864907);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,3.7283);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,3.385545);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.542484);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,2.215283);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.964407);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.721038);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.748395);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.169164);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.9418139);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.7578307);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.4842477);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.3196209);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.2081159);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(352917);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
