void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.427007,1.133333,2.164158);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,21.25656);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,17.55042);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,9.448536);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,6.841929);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,4.805255);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.538052);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.9787128);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.4648649);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2317501);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1904371);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1479523);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1240317);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.06486468);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.06413416);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.05579041);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03301721);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02397543);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01250105);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.0170492);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.004050044);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002711063);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.274525);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.2786019);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1824867);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1616651);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1356575);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.09100906);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.05750138);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.0378811);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.0262871);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02559881);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.02113512);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.02009131);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01387288);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01419974);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01281672);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.010056);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.00863377);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.006293243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.007033986);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.004050044);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002711063);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(21953);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
