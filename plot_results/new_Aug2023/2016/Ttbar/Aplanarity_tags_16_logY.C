void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.194009,1.133333,4.936373);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,8826.446);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1303.819);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,353.1874);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,129.9216);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,60.32294);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,29.78546);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,18.02527);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,8.550242);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,5.295434);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,2.992889);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,2.555462);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.199416);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,0.9749012);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.7132196);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.5465472);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.1109132);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1019668);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.1049672);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.06607834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,21.7279);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,8.269097);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,4.295218);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,2.609224);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,1.76794);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.246966);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,0.9731493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.668537);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.5232681);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.4090263);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.3709382);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.2558854);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2229689);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.1920473);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.1682247);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.07887059);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.07233432);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.07629337);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.06607834);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(216002);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
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
