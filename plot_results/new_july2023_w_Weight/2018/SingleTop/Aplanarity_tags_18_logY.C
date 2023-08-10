void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-1.87226,1.133333,3.900259);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1110.344);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,143.6239);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,42.79917);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,15.21623);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,9.536665);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.379352);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.377011);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,1.588085);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.6257476);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.7527122);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.1724334);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.1013963);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.24598);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,-0.05654178);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,15.50557);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,5.479752);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.971954);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.663795);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.594483);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.6338512);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6871667);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.5560506);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.40794);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.4212643);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.1285027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.07315066);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.2088398);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.05654178);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(14154);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->Draw("HIST");
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
