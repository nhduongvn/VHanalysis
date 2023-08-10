void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:31:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.2288,1.133333,3.781309);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,799.3729);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,110.559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,33.15588);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,11.07389);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,6.681904);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.30631);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.543376);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4855113);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.193253);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.3578148);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.1037628);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.4085355);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.04712387);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.05188141);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,11.06076);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.068946);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.26096);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.312459);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.08202);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5307301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5489541);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1536869);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.09671431);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.271862);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.07337139);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.275663);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.04712387);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.05188141);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11980);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->Draw("HIST");
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
