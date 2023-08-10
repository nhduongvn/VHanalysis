void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:27:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-33.21991,1.133333,298.9791);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,253.104);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,194.6144);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,118.3434);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,71.55787);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,37.81137);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,22.55558);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,14.2701);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,7.630054);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,6.68378);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,3.182839);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.069571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,1.406138);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.456863);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.157717);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.303652);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.4432982);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.494024);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.1451856);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1312021);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.247675);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,5.451646);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.234591);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.389801);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.480071);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,1.935843);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.518708);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.086326);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.062207);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.7070786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.6222745);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.4271791);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.4301803);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4151227);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4870498);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.2822567);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.2867786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.08401713);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.07574959);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(9491);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
