void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-3.433851,1.133333,2.425865);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,36.50431);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.046516);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5494206);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1678809);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.06663592);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.04805155);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.02377648);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01798631);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01183186);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002838901);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004494474);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.003086402);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2382825);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06849722);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02894776);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01589484);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01003075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.008441387);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.006030354);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.005206386);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.004185367);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002007551);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002597041);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.002183184);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28234);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->Draw("HIST");
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
