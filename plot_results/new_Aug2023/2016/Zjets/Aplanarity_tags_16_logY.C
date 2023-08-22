void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.214269,1.133333,4.019965);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1315.203);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,161.3446);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,42.71144);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,11.33079);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,5.551834);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,2.138231);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.121372);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.142995);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4407267);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.2986792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.05130792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.1193733);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.06809492);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.05725555);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,21.57221);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,9.572854);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,5.043373);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.263861);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,0.9611692);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.4576027);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.6015781);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4369525);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1672498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1338231);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.05130792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.08484983);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.06809492);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.05725555);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14509);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
