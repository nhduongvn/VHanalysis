void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 10:41:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.532026,1.133333,3.81047);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,791.9027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,112.7852);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,33.62371);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,11.50605);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,6.418408);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.409662);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.576522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4755868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.136814);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.4352691);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.04228498);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.3575468);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.02530778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.07522378);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,12.41683);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.680027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.598093);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.482562);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.138779);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.6707055);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.581777);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1691301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.1265589);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.3209468);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.03111897);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.2351788);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.02530778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.07522378);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11223);

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
