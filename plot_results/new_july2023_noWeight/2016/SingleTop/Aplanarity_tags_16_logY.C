void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.251163,1.133333,3.65836);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,616.3951);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,80.97272);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,22.50463);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,9.917334);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,3.655138);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.625842);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.239965);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4145816);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.453798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.09445983);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,9.829717);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,3.450302);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.776457);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.275778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.7227649);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.3635431);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6752446);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1385472);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2813042);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.06697591);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(9491);

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
