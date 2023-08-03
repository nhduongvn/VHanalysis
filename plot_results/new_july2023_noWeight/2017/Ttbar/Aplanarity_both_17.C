void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1537.844,1.133333,13840.59);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,11716.9);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,3863.934);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1885.856);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1088.703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,667.3671);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,454.0282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,288.5372);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,196.9796);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,142.5152);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,97.2473);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,62.85001);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,47.35535);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,31.10034);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,21.70291);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,12.65477);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,8.750043);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,5.131482);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.56713);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.571366);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.4502646);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1149227);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.04456635);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,27.0655);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,15.55573);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.8651);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,8.254077);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.467056);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.343986);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.253826);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.518299);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.99858);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.478953);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.983846);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.724131);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.403251);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.164188);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.8876744);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.7459133);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5610645);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4686929);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.314741);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1642966);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.08328373);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.04456635);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(345543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
