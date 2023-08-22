void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-3.668926,1.133333,2.474683);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,38.26251);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.822146);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5097955);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1839901);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.07423469);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.0636151);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01531557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.0277893);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008103428);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.003487241);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.005573982);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.005186108);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.001763864);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.001926296);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2487862);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06609458);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02876311);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01698237);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01104332);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.010322);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.004799169);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.006843138);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.003664544);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002466438);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003060807);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.003131803);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.001763864);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.001926296);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28819);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
