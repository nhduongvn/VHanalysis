void genWeight__17_logY()
{
//=========Macro generated from canvas: genWeight__17/genWeight__17
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__17 = new TCanvas("genWeight__17", "genWeight__17",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__17->SetHighLightColor(2);
   genWeight__17->Range(-2.8,2.116114,2.533333,4.726144);
   genWeight__17->SetFillColor(0);
   genWeight__17->SetBorderMode(0);
   genWeight__17->SetBorderSize(2);
   genWeight__17->SetLogy();
   genWeight__17->SetLeftMargin(0.15);
   genWeight__17->SetFrameBorderMode(0);
   genWeight__17->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_9 = new TH1D("genWeight_stack_9","",200,-2,2);
   genWeight_stack_9->SetBinContent(71,476.5919);
   genWeight_stack_9->SetBinContent(130,15402.53);
   genWeight_stack_9->SetBinError(71,0.8773549);
   genWeight_stack_9->SetBinError(130,4.987673);
   genWeight_stack_9->SetEntries(9831562);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   genWeight_stack_9->SetFillColor(ci);
   genWeight_stack_9->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_9->GetXaxis()->SetRange(1,200);
   genWeight_stack_9->GetXaxis()->SetLabelFont(42);
   genWeight_stack_9->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_9->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_9->GetXaxis()->SetTitleFont(42);
   genWeight_stack_9->GetYaxis()->SetLabelFont(42);
   genWeight_stack_9->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_9->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_9->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_9->GetYaxis()->SetTitleFont(42);
   genWeight_stack_9->GetZaxis()->SetLabelFont(42);
   genWeight_stack_9->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_9->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_9->GetZaxis()->SetTitleFont(42);
   genWeight_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__17->Modified();
   genWeight__17->cd();
   genWeight__17->SetSelected(genWeight__17);
}
