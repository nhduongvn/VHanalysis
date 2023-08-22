void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-58.72323,1.133333,528.509);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,447.415);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,55.96865);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,16.42803);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,7.270094);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,2.551802);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.185472);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.65757);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.3828596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.3537723);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.03911861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.08571263);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.03836532);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,8.015285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,2.727961);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.449545);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.038394);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.5855154);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.3085666);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5452091);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1294515);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2042357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.03911861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.06182412);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.03836532);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(8949);

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
