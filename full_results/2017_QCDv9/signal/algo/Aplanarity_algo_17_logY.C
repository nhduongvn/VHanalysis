void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,0.6008744,1.171633,2.351577);
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
   st->SetMaximum(123.2544);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(6.470812);
   st_stack_126->SetMaximum(150.1436);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetLabelSize(0.035);
   st_stack_126->GetXaxis()->SetTitleSize(0.035);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetLabelSize(0.035);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleOffset(0);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetLabelSize(0.035);
   st_stack_126->GetZaxis()->SetTitleSize(0.035);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.9593598);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.771123);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.5638955);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.4089837);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.2735371);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.1944309);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.1433032);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.1250291);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.0903242);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.07389203);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.05371444);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.0347353);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.02295839);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.02035229);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.01226114);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.002001201);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.003827788);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.002002576);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.042986);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.03859472);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.03296515);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.028329);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.02258918);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.01938509);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.016869);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01526496);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01318404);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01182556);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01007241);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.008051953);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.006720195);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.006168162);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.004744015);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.002001201);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.002708533);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002002576);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(2209);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.2731841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.2419948);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.1653342);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.1130827);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.08240684);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.0618322);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.04276713);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.02644308);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01286257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.01184715);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.01100274);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.005135697);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.004745065);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.002162966);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.00129167);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0007786917);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.0002335884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0002241843);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.000318965);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.008091594);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.007669118);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.006322898);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.005220174);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.004492178);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.003885018);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.003216351);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.002541024);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001763893);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001725954);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001640599);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.001130681);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.00110401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0007262221);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0005777203);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0004531884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0002335884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0002241843);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0002256193);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(4555);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
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
