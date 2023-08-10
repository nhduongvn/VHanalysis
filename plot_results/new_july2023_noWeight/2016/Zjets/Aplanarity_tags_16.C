void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:27:53 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-224.1994,1.133333,2017.794);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1708.185);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,221.8065);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,53.33612);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,14.22057);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,6.549449);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,2.866838);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.410239);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.29515);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4894803);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.3446026);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.13315);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.07830265);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,31.76809);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,14.88092);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.04754);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.47721);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.079765);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.618287);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.6370964);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4591038);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1855364);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1544676);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.09415127);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.07830265);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14953);

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
