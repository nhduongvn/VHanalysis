void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-3.122818,1.133333,1.948313);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,14.57643);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,12.91447);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,7.174349);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.943873);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.490268);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.818622);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.6557375);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2939513);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2164257);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1211338);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.07914073);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.06298956);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.04845351);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.04199304);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02584187);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.04037792);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.0193814);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01130582);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.006460468);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.004845351);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1534361);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1444243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1076448);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08935845);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.07508122);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.05419674);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.0325437);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.02178912);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01869633);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01398732);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01130582);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.0100864);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.008846359);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.008235512);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006460468);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008075584);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.005594929);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004273198);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003230234);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002797464);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28819);

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
