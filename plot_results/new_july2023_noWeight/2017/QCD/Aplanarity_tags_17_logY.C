void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:31:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,0.5921027,1.133333,6.044648);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,166665.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,33547.08);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3912.716);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2288.497);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,528.5344);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,193.686);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,56.26824);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,54.99088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,297.4088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,27.4402);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.88113);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,15646.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,14922.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,733.6302);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,666.1927);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,275.1048);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,54.20044);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,26.28335);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,26.27174);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,269.3049);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,22.4618);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,23.09868);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
