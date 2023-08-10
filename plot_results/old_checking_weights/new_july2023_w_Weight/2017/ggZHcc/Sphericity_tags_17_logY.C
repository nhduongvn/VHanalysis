void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-4.112462,1.133333,-1.090864);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.02135146);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01666302);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.00965955);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.008104374);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.003241225);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001463245);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001092562);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.000625704);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0003095479);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.0006109715);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.0005645332);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0007791566);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.0003730181);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.002260976);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002029156);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001563624);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001383417);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0008766165);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0005697329);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004938542);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003667657);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0002285455);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.0004323536);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0004012177);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0004498944);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0003161404);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->Draw("HIST");
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
