void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:20:46 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-7.799693,1.133333,70.19723);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,59.42623);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,4.154144);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.7429238);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2536368);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1461586);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.0582416);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.0354424);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.006662425);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01436561);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.008884802);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.003214456);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002637326);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.004050044);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.4783446);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1184555);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04882645);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.0279961);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02158564);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01338128);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.01034612);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004798622);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006453557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005196379);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003214456);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002637326);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.004050044);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(21953);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
