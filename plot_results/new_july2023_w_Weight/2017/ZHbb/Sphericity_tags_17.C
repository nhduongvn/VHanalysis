void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.086741,1.133333,18.78067);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,15.89898);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,14.17314);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,7.8474);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,5.378843);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.827249);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.962637);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.7342347);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.3240663);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2431297);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1283516);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.08148134);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.07074414);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.05409401);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.04419383);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02556196);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.04550556);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01756355);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01299947);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.007242962);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.006243138);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1783732);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.16833);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1245456);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1039679);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.08807581);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0631496);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.03782601);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.0250306);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02175616);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01567614);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01228937);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01176038);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01025202);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.009282582);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006969915);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.009236954);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.005705343);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004974627);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003681905);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003604578);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27953);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
