void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.152232,1.133333,3.196696);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,242.2449);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,185.2883);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,111.915);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,68.2478);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,36.54097);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,21.41761);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,14.00139);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,7.241858);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,6.606294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,3.365185);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,1.908115);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,1.324791);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.43223);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.142712);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.308836);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.3723771);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.5419088);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.04827152);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1249709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.61672);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,5.740043);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.50475);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.649895);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.580061);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.035661);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.589179);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.141754);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.113474);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.7549499);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.6274208);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.4086581);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.4540511);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4249609);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.5346282);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.288298);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.3208434);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.09526657);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.07297557);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(9214);

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
