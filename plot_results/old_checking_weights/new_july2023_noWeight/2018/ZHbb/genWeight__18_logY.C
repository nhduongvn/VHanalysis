void genWeight__18_logY()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,2.274658,2.533333,4.883771);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLogy();
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_9 = new TH1D("genWeight_stack_9","",200,-2,2);
   genWeight_stack_9->SetBinContent(71,686.4353);
   genWeight_stack_9->SetBinContent(130,22146.81);
   genWeight_stack_9->SetBinError(71,1.252613);
   genWeight_stack_9->SetBinError(130,7.114963);
   genWeight_stack_9->SetEntries(9989262);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__18->Modified();
   genWeight__18->cd();
   genWeight__18->SetSelected(genWeight__18);
}
