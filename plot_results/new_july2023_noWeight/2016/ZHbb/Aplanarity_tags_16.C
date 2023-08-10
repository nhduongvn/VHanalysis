void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-4.642443,1.133333,41.78198);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,35.37099);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.949872);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5207273);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1648741);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.06182779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.04534038);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.02198321);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01786136);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01099161);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002747902);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004121852);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.002747902);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2204495);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06366301);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02674797);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01505088);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.009216742);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.007892746);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005495803);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.00495385);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.00388612);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.00194306);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002379753);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.00194306);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28512);

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
