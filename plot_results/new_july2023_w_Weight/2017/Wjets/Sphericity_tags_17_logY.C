void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.21492,1.133333,2.811714);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,107.523);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,55.98313);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,39.97145);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,18.99132);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,12.43892);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,10.47374);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,4.644369);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,3.802971);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.402406);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,2.10157);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6085321);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.3530778);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,0.4442551);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,6.222946);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.4224619);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2161644);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.3665179);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.03879475);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1865307);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,10.57368);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,5.015077);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,4.903257);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.683343);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.377319);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,2.121378);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.017886);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.629147);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3600729);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.5222038);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.284942);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1816336);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.2115171);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,5.568318);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1885596);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1511131);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.2132416);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.03879475);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1865307);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2189);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
