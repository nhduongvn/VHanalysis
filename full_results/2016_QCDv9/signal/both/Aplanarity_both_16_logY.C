void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Feb  9 09:44:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,0.423486,1.171633,3.043483);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(454.1129);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(5.468719);
   st_stack_189->SetMaximum(604.6208);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetLabelSize(0.035);
   st_stack_189->GetXaxis()->SetTitleSize(0.035);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetLabelSize(0.035);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleOffset(0);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetLabelSize(0.035);
   st_stack_189->GetZaxis()->SetTitleSize(0.035);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3.367513);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2.435727);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.712229);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1.065957);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.7477999);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.5088699);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.375982);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.3333045);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.2028599);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.1295128);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1039959);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.07660481);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.07953801);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0514019);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.01774892);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.0212468);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.01059785);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.003231239);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,0.002871662);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.1004757);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.08505957);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.07150304);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.05639392);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.04748821);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.03886161);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.03387162);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.03151837);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.02599714);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.02008365);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01753554);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.01503564);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.01533167);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01249644);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.007272044);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.008043123);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.00535802);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.003231239);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,0.002871662);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3959);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.173616);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.759018);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.5063377);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.3548528);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.2298184);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.159535);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.1142181);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.07483752);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.04632478);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.03554619);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.02200527);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01278482);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.01149337);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.004744293);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.003530464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.002231758);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.001584193);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.001135226);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.02107005);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01704205);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.01392044);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01169604);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.009415895);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.007856356);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.006627111);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.005377231);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.004234524);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.0037186);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.002923027);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.002207701);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.002071049);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001331528);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001180138);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0009216915);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0007926875);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0006561877);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9371);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
