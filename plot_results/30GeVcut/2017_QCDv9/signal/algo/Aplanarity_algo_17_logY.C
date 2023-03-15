#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,0.6030165,1.171633,2.343544);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(121.4099);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(6.48455);
   st_stack_126->SetMaximum(147.7378);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.9465589);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.7581463);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.554014);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.4039883);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.2713532);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.1932184);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.1376104);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.122732);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.08810015);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.07389203);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.05371444);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.03280383);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.02295839);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.02035229);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.01226114);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.002001201);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.003827788);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.002002576);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.04258133);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.03826761);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.03266743);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.02817627);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.02248558);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.01931608);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.01654402);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01509113);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.0129951);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01182556);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01007241);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.007816865);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.006720195);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.006168162);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.004744015);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.002001201);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.002708533);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002002576);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.2675404);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.2392619);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.1639759);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.1131188);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.08203542);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.06167367);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.04225158);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.02644308);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01286257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.01184715);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.01074193);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.005135697);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.004745065);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.002162966);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.00129167);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0007786917);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.0002335884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0002241843);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.000318965);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.00801029);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.007623258);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.006293145);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.005221804);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.004484448);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.003881782);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.003195613);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.002541024);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001763893);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001725954);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001619736);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.001130681);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.00110401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0007262221);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0005777203);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0004531884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0002335884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0002241843);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0002256193);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
